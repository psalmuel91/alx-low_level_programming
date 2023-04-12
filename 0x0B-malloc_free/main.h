#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
* main - All prototype resides here for linkage
* @c: argument with variable char
* @str: pointer argument
* @size: pointer argument
* @s1: pointer argument
* @s2: pointer argument
* @grid: integer
* @height: integer
*
* Return: return (0) Success
*/

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
