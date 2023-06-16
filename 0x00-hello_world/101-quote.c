#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints a line without using printf
 *        or puts, writes the line to standard error
 *
 *Return: 1 (Success)
 */
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quo, 59);
return (1);
}
