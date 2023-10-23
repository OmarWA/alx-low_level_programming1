#include <stdio.h>

/**
 * main - the entry point to the program
 * Return: 0 upon successful execution of the program
*/
int main(void)
{
char number = '0';
while (number <= '9')
{
putchar(number);
number++;
}
putchar('\n');
return (0);
}
