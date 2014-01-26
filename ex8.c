#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 20, 34, 56, 78};
	char name[] = "Ike";
	char full_name[] = {
			'I', 'k', 'e',
			' ', 'H', '.', ' ',
			'M', 'c', 'C', 'r', 'e', 'e', 'r', 'y', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of an areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d\n", areas[0]);

	printf("The size of an char: %ld\n", sizeof(char));
	printf("The size of an name (char[]): %ld\n", sizeof(name));
	printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));

	printf("The size of an full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars in full_name: %ld\n", sizeof(full_name) / sizeof(char));

	printf("Name: \"%s\"\nFull name: \"%s\"\n", name, full_name);

	return 0;
}
