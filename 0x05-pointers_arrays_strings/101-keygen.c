#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates valid random passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_haif1, diff_haif2;

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + random() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		diff_haif1 = (sum - 2772) / 2;
		diff_haif2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		diff_haif1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_haif1))
			{
				password[index] -= diff_haif1;
				break;
			}
		}
		for (index = 0; password[index    ]; index++)
		{
			if (password[index] >= (33 + diff_haif2))
				password[index] -= diff_haif2;
			break;
		}
	}
	printf("%s", password);
	return (0);
}
