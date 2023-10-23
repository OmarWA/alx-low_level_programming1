#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0 upon the successful execution of the program
*/
int main(void)
{
int number = 0x30;
while (number <= 0x39)
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
