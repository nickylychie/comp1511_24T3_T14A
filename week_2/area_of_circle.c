// Nicole, 24T3 Week 2
// Write a program that takes in a radius and prints out the area of a circle

#include <stdio.h>

#define PI 3.1415

int main(void) {

	// make some variables, and define them
	double radius;
	double area;

	// scan in a radius
	printf("please enter a radius: ");
	scanf("%lf", &radius);

	// calculate area with pi * radius^2
	area = PI * radius * radius;

	// output the area
	printf("this is the area: %.2lf\n", area);

	return 0;
}
