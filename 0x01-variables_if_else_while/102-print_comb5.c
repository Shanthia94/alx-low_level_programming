#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combination of two two diguit numbers
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int first_digit = 0;
	int second_digit;

	while (first_digit <= 99)
	{
		second_digit = first_digit;

		while (second_digit <= 99)
		{
			if (second_digit != first_digit)
			{
				putchar((first_digit / 10) + 48);
				putchar((first_digit % 10) + 48);
				putchar(' ');
				putchar((second_digit / 10) + 48);
				putchar((second_digit % 10) + 48);
				if (first_digit != 98 || second_digit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second_digit;
		}
		++first_digit;
	}
	putchar('\n');
	return (0);
}
