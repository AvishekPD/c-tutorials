//Smart area calculater

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define pi 3.1415 //Defines the Value of pi

int main()
{
    int userInput;
    float theValue;

    system("clear"); //Clear the console and the execute code below

    printf("Enter the radius of the circle:");
    if ( scanf ("%i%*c", &userInput) != 0) 
	//Here %i will take only integer, if char is inputed it will take input as 0
    {
	theValue = pi * userInput * userInput; //Here the use of pi that is defined above
	printf("The area of circle with radius %d is %f\n", userInput, theValue);
    }

    else
	printf("Silly enter a valid number not your name\n");

    return 0;
}
