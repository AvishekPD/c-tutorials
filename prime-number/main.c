//Prime Number checker 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int userInput;
    int i;

    printf("Enter a number:");
    scanf("%d", &userInput);

    i = 2; 
    //To check the userInput is divisible from number 2 since all is Divisible by 1

    while (i <= userInput - 1) 
	//To check the number before userInput is equal to i 
	//**DOES NOT CHANGE THE VALUE OF userInput**
    {
	if(userInput % i == 0)
	{
	    printf("It is not a prime number\n");
	    break;
	}
	i++;
	//Increase the Value of i till value of i is equal to userInput
    }

    if (userInput == i)
	printf("It is a prime number\n");
}
