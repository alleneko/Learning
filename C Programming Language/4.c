#include <stdio.h>

/*
Assignment: Farenheit to Celsius using For loop.
*/
main()
{
	int farenheit;

	for (farenheit = 0; farenheit <= 300; farenheit += 20) {
		printf("%3d %6.1f\n", farenheit, (5.0 / 9.0) * (farenheit - 32));
	}
}