#include <stdio.h>

/**
* main - Prints combination in pairs
*
* Return: return (0) Success
*/

int main(void)
{
	int combo, addon, addonT;

	for (combo = '0'; combo <= '9'; combo++)
	{
		for (addon = '0'; addon <= '9'; addon++)
		{
			for (addonT = '0'; addonT <= '9'; addonT++)
			{
				if (combo < addon && addon < addonT)
				{
					putchar(combo);
					putchar(addon);
					putchar(addonT);

					if (combo != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
