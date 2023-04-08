#include <stdio.h>
#include "main.h"

/** main - print name
 * @argc: count arguments
 * @argv: arguments
 *
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
