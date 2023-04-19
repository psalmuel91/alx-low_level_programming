#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

/**
* main - All prototype resides here for linkage
* @c: argument with variable char
*
* Return: return (0) Success
*/

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif
