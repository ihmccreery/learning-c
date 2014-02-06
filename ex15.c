#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};

	// use indexing
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for(i = 0; i < count; i++) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	// use pointers
	int *cur_age = ages;
	char **cur_name = names;

	for(i = 0; i < count; i++) {
		printf("%s is %d years old\n", *(cur_name+i), *(cur_age+i));
	}

	printf("---\n");

	// pointers are just arrays!
	for(i = 0; i < count; i++) {
		printf("%s is %d years old again\n", cur_name[i], cur_age[i]);
	}

	printf("---\n");

	// pointers can be stupid and complex
	for(cur_name = names, cur_age = ages;
		       (cur_age - ages) < count;
		       cur_name++, cur_age++) {
		printf("%s is %d years old again\n", *cur_name, *cur_age);
	}

	return 0;
}
