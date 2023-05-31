#include <stdio.h>

/*
This is a comment. Assignment: Convert Farenheit to Celsius.
First done as integers, then as floats for more accurate conversion.	
*/
main()
{
	float farenheit, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	farenheit = lower;
	printf("%3s %6s\n", "Far", "Cels");
	while (farenheit <= upper) {
		celsius = (5.0/9.0) * (farenheit - 32.0);
		printf("%3.0f %6.1f\n", farenheit, celsius);
		farenheit += step;
	}
}