#include <stdio.h>                           
/**
 * print_to_98 - "A function to print between     'n' and 98
 * 
 * @n: input integer
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			if (n == 98)
			{
				printf("%d" , k);
				printf("\n");
				break;
			}
			else
			{
			printf("%d, " , n);
			}
		}
	}
	else
	{
		for (; n >= 98 ; n--)
		{
			if (n == 98)
			{
				printf("%d" , n);
				printf('\n');
				break;
			}
			else
			{
			printf("%d, ", n);
			}
		}
	}
}
