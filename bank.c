#include <stdio.h>

int main() {
    float balance = 0.0;
    int choice;
    float amount;

    do {
        printf("\n--- Bank Account Management ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Money deposited successfully.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Money withdrawn successfully.\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("Current balance: %.2f\n", balance);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
