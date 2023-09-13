#include <stdio.h>                              2 /**
  3  * print_to_98 - "A function to print between     'n' and 98
  4  *
  5  * @n: input integer
  6  *
  7  * Return: Always 0
  8  */
  9 void print_to_98(int n)
 10 {
 11         int k;
 12
 13         if (n < 98)
 14         {
 15                 for (k = n ; k <= 98 ; k++)
 16                 {
 17                         printf(%d, k);
 18                         printf(' ');
 19                 }
 20         }
 21         else if (n == 98)
 22         {
 23                 printf(%d, n);
 24         }                                      25         else
 26         {
 27                 for (k = n ; k >= 98 ; k--)
 28                 {
 29                         printf(%d, k);
 30                         printf(' ');
 31                 }
 32         }
 33         printf('\n');
 34 }
