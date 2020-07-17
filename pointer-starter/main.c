#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i = 3;
    int *j, **k; 
    //*j is for storing a value at j pointer;
    //**k is for a storing a a pointer inside k pointer hence **;

    j = &i;
    // storing address of i in j hence j is poiting to i;
    k = &j;
    // storing address of pointer j in k hence k is poiting to j which is poiting to i;

    printf("The address of i is %u", &i); //printing the address of i normally;
    printf("\nThe address of i is %u", j); //printing the same using pointer j;
    printf("\nThe address of i is %u", *k); 
    //printing the same using pointer k aka value of k which is just address of j;
    //so it will print the value of j hence * which is in return is address of i;
    //so it will print address of i;
    printf("\nThe address of j is %u", k); //printing address of j which is store in k;
    printf("\nThe address of k is %u", &k); //printing address of k cause didn't stored it;
    printf("\nAnd the value of i is %d", i); //priting value of i normally;
    printf("\nThe value of i is %d", i); //same....
    printf("\nThe value of i is %d", *j); 
    //printing the value of j which is a pointer to address of i which have 3 stored
    printf("\nThe value of j is %d",**k);
    //printing the value of address of j which is address of i which has 3 stored 
    //hence value of k is value of j which is address of i which has value 3

    return 0;
}
