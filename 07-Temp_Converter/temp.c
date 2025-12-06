#include<stdio.h>

int main() {
    int C,F;

    printf("The temperature in Celsius, C: ");

    scanf("%d", &C);

    F = C*9/5 + 32;

    printf("\n---------After Converting---------\n");

    printf("The temperature in Farenheit is %d\n", F);

    return 0;
}
