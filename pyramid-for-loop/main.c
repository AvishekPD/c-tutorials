#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j;
     int conOut = 1;

    for (i = 1; i <= 4; i++) //Makes line 1 and so on....
    {
	for (j = i; j <= 4; j++) 
	     //Prints same amount of spaces as number of line it is in hence, j=i
	{
	    printf(" ");
	}

	for(j = 1; j <= i; j++)
	    //Prints out number and increases it's value
	{
	    printf("%d ",conOut);

	    conOut ++;
	}
	printf("\n");
    }

    return 0;
}
