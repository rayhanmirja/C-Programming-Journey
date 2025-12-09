#include <stdio.h>

int main()
{
    int num1;

    printf("Enter num1: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("This number is even\n");
    }
    else
    {
        printf("This number is odd\n");
    }
}
