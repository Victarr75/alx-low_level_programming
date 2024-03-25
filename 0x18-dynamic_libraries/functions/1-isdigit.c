#include "main.h"

/**
 * _isdigit - check if number are 0-9
 *
 * @c: integer variable
 * Return: 0 or 1
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
