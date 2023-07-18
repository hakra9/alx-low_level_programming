#include <stdio.h>

/**
 * struct dog - Represents a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t myDog;

	myDog.name = "Buddy";
	myDog.age = 3.5;
	myDog.owner = "John Smith";

	printf("Dog's name: %s\n", myDog.name);
	printf("Dog's age: %.1f\n", myDog.age);
	printf("Dog's owner: %s\n", myDog.owner);

	return 0;
}
