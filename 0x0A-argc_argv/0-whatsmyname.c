#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints the name of the program
 * @argc: counter
 * @argv: array
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
