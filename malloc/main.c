#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *masterName[6];
    char backUp[39];

    int len, z = 1;
    char *memAloc;

    for(int i = 0; i <=5; i++)
    {
	printf("Enter the %d name:", z);
	scanf("%s", &backUp);
	len = strlen(backUp);
	memAloc = malloc(len+1);
	strcpy(memAloc, backUp);
	masterName[i] = memAloc;
	z++;
    }

    for(int j = 0; j <= 5; j++)
    {
	printf("Hello %s!\n", masterName[j]);
    }

    return 0;
}
