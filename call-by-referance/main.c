//Call By Reference, Compiled at 6:57 IST

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void calci(); //Declared the fun so compiler can know it exist

int main()
{
    int radius; 
    float area, peri; //Since area and perimeter gonna be float

    printf("Please enter the Radius of the Circle:");
    scanf("%d%*c", &radius); //Inputs radius from user and ignore any char

    calci(radius, &area, &peri); //Here my sweet funtion 
    //using '&' to call the directly their memory

    printf("\nSo the radius of the circle is:%d", radius);
    printf("\nAnd the Area is : %f and Perimeter is %f\n", area , peri); //Giving O/P

    return 0;
}


void calci(int r, float *a, float *p)
{
    //Using '*' to directly change there value at memory level
    //Hence changing the real value of area and peri in main()

    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;

}
