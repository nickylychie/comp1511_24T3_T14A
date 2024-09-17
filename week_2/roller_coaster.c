// Nicole, 24T3 Week 2
// Write a program that takes in a user's height, and determines if they can
// ride a rollercoaster

#include <stdio.h>

int main(void) {

	// minimum height = 100
	// ride alone threshold = 160

	// This program:
	// 1. Scans in the users height.
	printf("What is your height? ");
	int height;
	scanf("%d", &height);

	// 2. If the height is 0 or less, 
	//    it should print an error message
	if (height <= 0) {
		printf("Height has to be a positive value\n");
	
	// 3. If the height is below the minimum height, 
	//    it should print a message telling the user they are not tall enough to ride
	} else if (height < 100) {
		printf("You are too short :(\n");

	// 4. If the height is or is above the minimum, but below the ride alone threshold,
	//    it should print a message telling the user they can ride with an adult
	} else if (height >= 100 && height < 160) {
		printf("You can ride with an adult\n");
	
	// 5. If the height is or is above the ride alone threshold, 
	//    it should print a message telling the user they can ride.
	} else if (height >= 160) {
		printf("You are tall enough!\n");
		return 0;
	}

	return 0;
}
