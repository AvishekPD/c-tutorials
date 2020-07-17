//Recurstion & example program of Factorial, Compiled a 20:40 IST

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int facto();

int main()
{
    int userInput, facOut;

    printf("Enter a number of which you want factorial of:"); //User inputs a number
    scanf("%d", &userInput);
    facOut=facto(userInput); //Here we call sweet function
    printf("\nThe factorial of %d is:%d\n", userInput, facOut);

}

int facto(int theValue) //Took in the value and copy in to 'theValue'
{
    int theNum;

    if (theValue ==1) 
	return(1);

	//if the value of the below factorial funtion 1 this will make it exit

    if (theValue ==1) 

    else
	theNum = theValue * facto(theValue - 1);

    /*Else this run at this is call recursion function calling itself again
    Explanation if the input is 4 the first theNum will be 
     theValue which is 5 * facto(theValue - 1 aka 4)
    so now it is 5 * facto(4) since the 4 is in facto then this function
    will run again so now it (4) in the facto function is still less 1 
    and the facto will break only if theValue is 1 
    so it will run again now this Main facto that we are seeing now will become
     theNum = 5(theValue) * 4(newly obtain theValue) * facto(theValue -1 so 3 now)
    since it is still not equal to 3 it will run again so in mathematically 
    it can be explained as f = x * (x - 1 * (x - 1 * (x - 1 * (x -1 * ( and so on )))))*/

    return (theNum); //Returns the final value to theNum which be stored in main()
}
