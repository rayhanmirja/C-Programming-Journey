#include <stdio.h>

int main()
{
    int current_amount, deposit_amount, withdraw_amount, total_amount;

    printf("Enter your current ammount: ");
    scanf("%d", &current_amount);

    printf("Enter your deposit amount: ");
    scanf("%d", &deposit_amount);

    printf("Enter your withdraw amount: ");
    scanf("%d", &withdraw_amount);

    total_amount = current_amount + deposit_amount - withdraw_amount;

    printf("Your bank balance is %d\n", total_amount);
    return 0;
}
