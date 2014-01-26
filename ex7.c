#include <stdio.h>

int main(int argc, char *argv[])
{
	// skip the familiar stuff

	int about_to_be_zero = 160;
	char nul_byt = '\0';
	int zero = about_to_be_zero * nul_byt;

	printf("%d should be zero.\n", zero);

	printf("Try to print out nul_byt: %c.\n", nul_byt);

	return 0;
}
