#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0 upon successful execution of the program
*/
int main(void)
{
char character = 'z';

while (character >= 'a')
{
putchar(character);
character--;
}

putchar('\n');

return (0);
}
