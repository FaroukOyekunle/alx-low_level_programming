#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * Description: prints its name, followed by a new line
 *
 * @argc: number of arguments
 * @argv: Command line arguments
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
