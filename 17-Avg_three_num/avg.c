#include <stdio.h>

int main()
{
    float num1, num2, num3, avg;

    printf("Enter the value of num1: ");
    scanf("%f", &num1);

    printf("Enter the value of num2: ");
    scanf("%f", &num2);

    printf("Enter the value of num3: ");
    scanf("%f", &num3);

    avg = (num1 + num2 + num3) / 3;

    printf("------After Calculating------\n");
    printf("Average of three number is %0.2f\n", avg);
    return 0;
}
