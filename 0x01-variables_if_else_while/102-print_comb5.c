#include <stdio.h>

/**
 * main - The entry point of the program
 * Return: 0 upon successful execution of the program
 */
int main(void)
{
int units1 = 0x31, units2 = 0x30, tens1 = 0x30, tens2 = 0x30;
while (tens2 <= 0x39)
{
while (units2 <= 0x39)
{
while (tens1 <= 0x39)
{
while (units1 <= 0x39)
{
if ((tens2 == tens1) && (units2 == units1))
{
units1++;
continue;
}
putchar(tens2);
putchar(units2);
putchar(' ');
putchar(tens1);
putchar(units1);
if ((tens2 == 0x39) && (units2 == 0x38) && (tens1 == 0x39) && (units1 == 0x39))
{
units1++;
continue;
}
putchar(',');
putchar(' ');
units1++;
}
tens1++;
units1 = 0x30;
}
units2++;
tens1 = tens2;
units1 = units2 + 1;
}
tens2++;
units2 = 0x30;
}
putchar('\n');
return (0);
}
