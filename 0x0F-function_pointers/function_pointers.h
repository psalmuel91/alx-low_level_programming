#ifndef FUNCTIONS_HEADER_FILE
#define FUNCTIONS_HEADER_FILE

/**
* main - All prototype resides here for linkage
* @c: argument with variable char
*
* Return: return (0) Success
*/

int _putchar(char c);
typedef __SIZE_TYPE__ size_t;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
