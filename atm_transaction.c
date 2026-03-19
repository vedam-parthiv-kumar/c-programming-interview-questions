#include <stdio.h>

int main() {
    float balance = 1000.00;
    int choice;
    float amount;
    int continue_transaction = 1;

    do {
        printf("\n--- ATM Simulation ---\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash. New balance: $%.2f\n", balance);
                }
                break;
            case 3:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount.\n");
                } else {
                    balance += amount;
                    printf("Amount deposited successfully. New balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("\nThank you for using the ATM simulation.\n");
                continue_transaction = 0;
                break;
            default:
                printf("\nInvalid selection. Please try again.\n");
        }

        if (continue_transaction != 0) {
            printf("\nWould you like to perform another transaction? (1 for Yes, 0 for No): ");
            scanf("%d", &continue_transaction);
        }

    } while (continue_transaction);

    return 0;
}
