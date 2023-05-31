#include <stdio.h>

/*
Assignment: Same as 2.c but converting Celsius to Farenheit.
*/
main()
{
	float farenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	celsius = lower;
	printf("%6s %6s\n", "Cels", "Far");
	while (celsius <= upper) {
		farenheit = (celsius * 9 / 5) + 32;
		printf("%6.0f %6.1f\n", celsius, farenheit);
		celsius += step;
	}
}