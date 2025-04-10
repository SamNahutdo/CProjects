//Samuel Angelo Udtohan
//1a 10:30am - 12:30pm
//bank system
//Deposit
//Withdraw
//Display Balance
//Exit
//Validation
//Invalid choices
//Invalid amount
//Invalid withdrawal
//Desposit succesful
//Withdrawal successful
//Exiting the program




//include library
#include <stdio.h>




//initial balance
#define INITIAL_BALANCE 500.0






//function prototypes
void deposit(float *balance);
void withdraw(float *balance);
void displayBalance(float balance);








//main function
int main() {
    float balance = INITIAL_BALANCE;
    int choice;









    //menu
    do {
        printf("\n\n\n\t\t\t\t\t                                       ===Bank Transactions Menu===\n");
        printf("\n\t\t\t\t\t                             1 Deposit    |    2 Withdraw    |    3 Display balance\n");
        printf("\n\t\t\t\t\t                                                 0 Exit\n");
        printf("\n\t\t\t\t\t                              Enter your choice: ");
        scanf("%d", &choice);









        //switch case
        switch (choice) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                displayBalance(balance);
                break;
            case 0:
                printf("\n\n\t\t\t\t\t                              Exiting the program. Thank you!\n");
                break;
            default:
                printf("\n\n\t\t\t\t\t                              Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
    return 0;
}









//deposit 
void deposit(float *balance) {
    float amount;
    do {
        printf("\n\n\t\t\t\t\t                              Enter the amount to deposit (must be 500 or more): ");
        scanf("%f", &amount);
        if (amount < 500) {
            printf("\n\n\t\t\t\t\t                              Invalid amount! Deposit must be 500 or more.\n");
        }
    } while (amount < 500); 
    *balance += amount; 
    printf("\n\n\t\t\t\t\t                              Deposit successful!\n");
    displayBalance(*balance); 
}









//withdraw 
void withdraw(float *balance) {
    float amount;
    do {
        printf("\n\n\t\t\t\t\t                                  Enter the amount to withdraw \n\t\t\t\t\t\t\t\t\t(Must balance doesn't below 500, or enter 0 to cancel): ");
        scanf("%f", &amount);
        if (amount == 0) {
            printf("\n\n\t\t\t\t\t                              Withdrawal canceled. Returning to the menu.\n");
            return;
        } else if (amount <= 0) {
            printf("\n\n\t\t\t\t\t                              Invalid amount! Withdrawal amount must be greater than 0.\n");
        } else if (*balance - amount < 500) {
            printf("\n\n\t\t\t\t\t                              Invalid amount! Withdrawal would cause balance to go below 500.\n");
        }
    } while (amount <= 0 || *balance - amount < 500); 
    *balance -= amount; 
    printf("\n\n\t\t\t\t\t                              Withdrawal successful!\n");
    displayBalance(*balance);
}










//display balance 
void displayBalance(float balance) {
    printf("\n\n\t\t\t\t\t                              Dear client your current Balance: %.2f\n", balance);
}
