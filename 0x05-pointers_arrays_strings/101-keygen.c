#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Entry point, program generates and print password.
 *
 * Return: return (0) success.
 */

int main(void)
{
	int ascii = 2772, i = 0, j, randNum;
	char p_word[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		randNum = rand() % 126;
		p_word[i] = randNum;
		ascii -= randNum;
		i++;
	}
	if (ascii >= 0)
		p_word[i] = ascii;
	else
	{
		i--;
	}


	for (j = 0; j <= i; j++)
	{
		if (p_word[j] != '\0')
			printf("%c", p_word[j]);
	}
	return (0);
}
