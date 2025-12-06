#include<stdio.h>

int main () {
    float num1, num2;

    printf("Enter the value of num1\n");
    scanf("%f", &num1);
    printf("Enter the value of num2\n");
    scanf("%f", &num2);

    printf("The addition of the values is %F\n", num1+num2);
    printf("The substraction of the values is %f\n", num1-num2);
    printf("The multiplication of the values is %f\n", num1*num2);
    printf("The division of the values is %f\n", num1/num2);

    return 0;
}
