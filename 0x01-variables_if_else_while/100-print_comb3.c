#include <stdio.h>
/**
 * main - print all 2 digit numbers from 0 to 99
 * Description: Print all numbers from 0 to 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
