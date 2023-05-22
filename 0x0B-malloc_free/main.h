# ifndef MAIN_H
# define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
char *argstostr(int ac, char **av);
char *argstostr(int ac, char **av);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);





# endif /* MAIN_H */
