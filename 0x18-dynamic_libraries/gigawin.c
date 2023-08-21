#include <stdio.h>

/**
 * check_result - checks results
 * @nums: the user input
 * @bonus: the value of bonus
 * Return: 1 if success otherwise 0
 */
int check_result(int *nums, int __attribute__((unused)) bonus)
{
	(void) nums;
	printf("Congratulations! You won the jackpot!\n");
	return (1);
}

/**
 * check_input - confirms if the user entered correct input
 * @argc: the number of arguments
 * @argv: the arguments passed by the user
 * Return: 1 if ok
 */
int check_input(int argc, char __attribute__((unused)) *argv[])
{
	(void) argc;
	return (1);
}

/**
 * pick_numbers - it generates numbers
 * and compares to the user input
 * @nums: user input
 * @bonus: the bonus
 */
void pick_numbers(int *nums, int *bonus)
{
	nums[0] = 9;
	nums[1] = 8;
	nums[2] = 10;
	nums[3] = 24;
	nums[4] = 75;
	*bonus = 9;
}

/**
 * print_numbers - prints the numbers
 * @nums: the user input
 * @bonus: bonus value
 */
void print_numbers(int *nums, int bonus)
{
	int j = 0;

	printf("Your nums: ");
	for (j = 0; j <= 4; j++)
	{
		printf("%d ", nums[j]);
	}

	printf("+ %d\n", bonus);
}
