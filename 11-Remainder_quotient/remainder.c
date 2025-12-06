#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("-------After Calculating-------\n");
    printf("Quotient is %d\n", num1 / num2);
    printf("Remainder is %d\n", num1 % num2);

    return 0;
}
