#include <stdio.h>

/**
* main - Prints combination in pairs
*
* Return: return (0) Success
*/

int main(void)
{
	int combo, addon;

	for (combo = '0'; combo <= '9'; combo++)
	{
		for (addon = '0'; addon <= '9'; addon++)
		{
			if (combo < addon)
			{
				putchar(combo);
				putchar(addon);

				if (combo != '8' || (combo == '8' && addon != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
