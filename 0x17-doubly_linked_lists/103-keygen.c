#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generates key depending on a username for crackme5
 * @argc: number of arguments  that are passed
 * @argv: arguments passed to the main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, j;
	size_t length, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char pswd[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	pswd[0] = l[(length ^ 59) & 63];

	for (i = 0, add = 0; i < length; i++)
		add += argv[1][i];
	pswd[1] = l[(add ^ 79) & 63];

	for (i = 0, j = 1; i < length; i++)
		j *= argv[1][i];
	pswd[2] = l[(j ^ 85) & 63];

	for (j = argv[1][0], i = 0; i < length; i++)
		if ((char)j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	pswd[3] = l[rand() & 63];

	for (j = 0, i = 0; i < length; i++)
		j += argv[1][i] * argv[1][i];
	pswd[4] = l[(j ^ 239) & 63];

	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();
	pswd[5] = l[(j ^ 229) & 63];
	printf("%s\n", pswd);

	return (0);
}
