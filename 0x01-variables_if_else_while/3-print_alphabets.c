#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0 upon successful execution of the program
 */
int main(void)
{
char lowerChar, upperChar;
lowerChar = 'a';
upperChar = 'A';
while (lowerChar <= 'z')
{
putchar(lowerChar);
lowerChar++;
}
while (upperChar <= 'Z')
{
putchar(upperChar);
upperChar++;
}

putchar('\n');

return (0);
}
