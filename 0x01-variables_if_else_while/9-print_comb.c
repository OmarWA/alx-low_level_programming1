#include <stdio.h>


/**
 * main - the entry point of the program
 * Return: 0 upon successful execution of the program
*/
int main(void)
{
int number = 0x30;

while (number <= 0x39)
{
putchar(number);
if (number == 0x39)
{
number++;
continue;
}
putchar(',');
putchar(' ');

number++;
}
putchar('\n');
return (0);
}
