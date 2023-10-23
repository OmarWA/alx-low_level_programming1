#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0 upon successful completion of the program
*/
int main(void)
{

char number = '0';
char letter = 'a';

while (number <= '9')
{
putchar(number);
number++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;

}
putchar('\n');

return (0);
}
