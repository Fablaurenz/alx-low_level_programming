#include <stdio.h>
/**
 * main - print all 2 digit numbers from 0 to 99
 * Description: Print all numbers from 0 to 99
 * rEturn: Always 0 (Success)
 */

int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(i);
			putchar(e);
			if (i == 57 && e == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++
	}
	putchar(',');
	return (0);
}
