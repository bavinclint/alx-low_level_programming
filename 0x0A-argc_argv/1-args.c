#include <stdio.h>

/**
 * main - check the code for number of arguments.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
