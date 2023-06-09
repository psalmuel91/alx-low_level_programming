#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
* main - All prototype resides here for linkage
* @c: argument with variable char
* @b: pointer argument
* @s: pointer argument
* @n: integer n-byte size
*
* Return: return (0) Success
*/

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);


#endif
