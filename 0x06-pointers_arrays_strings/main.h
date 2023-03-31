#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
* main - All prototype resides here for linkage
* @c: argument with variable char
* @dest: pointer argument
* @src: pointer argument
* @n: integer n-byte size
*
* Return: return (0) Success
*/

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);


#endif
