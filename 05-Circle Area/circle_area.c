#include<stdio.h>
// area of a circle
int main () {
    float radius;
    float pi = 3.14;

    printf("Enter the value of radius of a circle\n");
    scanf("%f", &radius);

    printf("The area of a circle is %f\n", pi*radius*radius);

    return 0;
}
