#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	for(i = 1; i < argc; i++) {
		printf("argv %d: %s\n", i, argv[i]);
	}

	// our own array of strings
	char *states[] = {
		"Washington", "Ohio",
		"Oregon", "Wyoming"
	};
	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
