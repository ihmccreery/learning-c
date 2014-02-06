#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

void Person_print(struct Person who)
{
	printf("Name: %s\n", who.name);
	printf("\tAge: %d\n", who.age);
	printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
	// make two people structs
	struct Person joe = {"Joe Alex", 32, 64, 140};
	struct Person frank = {"Frank Blank", 20, 72, 180};

	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", &joe);
	Person_print(joe);
	printf("Frank is at memory location %p:\n", &frank);
	Person_print(frank);

	// make everyone 20
	joe.age += 20;
	joe.height -= 2;
	joe.weight += 40;
	Person_print(joe);
	frank.age += 20;
	frank.weight += 20;
	Person_print(frank);

	return 0;
}
