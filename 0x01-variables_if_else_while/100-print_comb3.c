#include <stdio.h>

/**
 * main - combination of brains and materials
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int i, a;

	i = 48;
	a = 48;

	while (a < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (a != i && a < i)
			{
				putchar(a);
				putchar(i);
				if (i == 57 && a == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
