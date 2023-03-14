#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int y = 'a';

for (y = 'a'; y <= 'z'; y++)
{
/* refer int c*/
if (c == y)
{
return (1);
}
}
return (0);
}
