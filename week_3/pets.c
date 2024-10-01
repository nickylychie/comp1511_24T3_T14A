// Nicole, 24T3 Week 3
// Using structs and enums to make a pets program

#include <stdio.h>

// Define an enum for types of animals
enum animal_type {
  DOG,
  CAT,
  BIRD,
  FISH
};

// Define a struct for pets
struct pet {
  int age;
  double weight;
  enum animal_type animal;
};

int main(void) {
    
  // Create a pet
  struct pet lucky;
  lucky.age = 2;
  lucky.weight = 5.6;
  lucky.animal = DOG;

  // Print it's details

	return 0;
}