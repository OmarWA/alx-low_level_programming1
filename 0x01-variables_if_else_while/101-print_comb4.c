#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0 upon successful execution
*/
int main(void)
{

int hundreds = 0x30;
int tens = 0x31;
int units = 0x32;

while (hundreds < 0x38)
{
while (tens < 0x39)
{

while (units <= 0x39)
{
putchar(hundreds);
putchar(tens);
putchar(units);
if (hundreds == 0x37)
{
units++;
continue;
}
putchar(',');
putchar(' ');
units++;
}
tens++;
units = tens + 1;
}
hundreds++;
tens = hundreds + 1;
units = hundreds + 2;
}
putchar('\n');
return (0);
}
