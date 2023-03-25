#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
* main - All prototype resides here for linkage
* @i: argument with variable char
* @a: argument with variable char
* @b: argument with variable char
* @c: argument with variable char
* @day: argument with variable char
* @month: argument with variable char
* @year: argument with variable char
*
* Return: return (0) Success
*/


void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
