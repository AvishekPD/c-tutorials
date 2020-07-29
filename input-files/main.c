#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    FILE *userOut = fopen("test", "w");

    char in[50];


    if (userOut == NULL)
    {
	printf("The File cannot be open");
	return 0;
    }

    printf("Enter the string you want to add:");
    if (fgets(in, 49, stdin)  != NULL)
    {
	fputs(in, userOut);
	fputs("\n", userOut);
    }

    if(fclose(userOut) != NULL)
    {
	printf("The file failed to close");
    }

    else
    {
        printf("File close sucessfully");
    }
    
}
