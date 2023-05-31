#include <stdio.h>

// Assignment: Adding "Symbolic Constants" to For Loop of farenheit to celsius converter.

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int farenheit;

	for (farenheit = LOWER; farenheit <= UPPER; farenheit += STEP) {
		printf("%3d %6.1f\n", farenheit, (5.0 / 9.0) * (farenheit - 32));
	}
}