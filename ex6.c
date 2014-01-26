#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 1000;
	float power = 2.456f;
	double super_power = 1234234.4567;
	char initial = 'H';
	char first_name[] = "Ike";
	char last_name[] = "McCreery";

	printf("You are %d miles away.\n", distance);
	printf("You have %f powers.\n", power);
	printf("You have %f super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My full name is %s %c. %s.\n",
			first_name, initial, last_name);

	return 0;
}
