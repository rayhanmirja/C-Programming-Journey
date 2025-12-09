#include <stdio.h>

int main()
{
    int num1;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("This number is divisible by 2\n");
    }
    else
    {
        printf("This number is not divisible by 2\n");
    }
}
