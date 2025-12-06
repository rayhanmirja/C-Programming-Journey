#include <stdio.h>

int main()
{
    int BDT, USD;

    float Rate;

    printf("Enter the ammount in BDT: ");

    scanf("%d", &BDT);

    Rate = 0.01;

    printf("The Amount in USD is %0.1f\n", BDT * Rate);

    return 0;
}
