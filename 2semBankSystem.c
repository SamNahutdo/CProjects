//Samuel Angelo Udtohan
//1a 10:30 - 12:00
//bank system
//Address
//Name
//Client
//Accept account number
//Accept amount
//Compute Deposite + balance
//Compute with balance
//Display client Gcash
//Open new account
//Cash in
//Cash out
//Invalid option
//valid option
//Exiting program






//include library
#include <stdio.h>
#include <stdlib.h>






//accept account number
void acceptAccNum(char accNum[]) {  
    printf("\n\n\t\t\t\t\t                                            ***New Account***\n");
    printf("\n\n\t\t\t\t\t                              Enter Account Number: ");
    scanf("%s", accNum);
}







//accept amount
float acceptAmount() {
    float amount;
    while (1) {
        printf("\n\n\t\t\t\t\t                              Enter Amount: ");
        scanf("%f", &amount);
        if (amount < 0) {
            printf("\n\n\t\t\t\t\t                                Amount cannot be lower. Try again.\n");
        } else {
            return amount;
        }
    }
}







//compute deposite + balance
float computeDepBalance(float balance, float deposit) {
    return balance + deposit;
}







//compute with balance
float computeWithBalance(float balance, float withdrawal) {
    return balance - withdrawal;
}







//display client bank account
void DisplayClientRec(char accNum[], char name[], char address[], float balance) {
    printf("\n\n\n\t\t\t\t\t                            ::::::::::::::::::: CLIENT ACCOUNT ::::::::::::::::::::\n");
    printf("\n\t\t\t\t\t                                Account Number:    %s", accNum);
    printf("\n\t\t\t\t\t                                Name:              %s", name);
    printf("\n\t\t\t\t\t                                Address:           %s", address);
    printf("\n\t\t\t\t\t                                Balance:           %.2f", balance);
}








//main function
int main() {
    char accountNumber[25]; 
    char name[50];
    char address[100];
    float balance = 0.0;
    int choice;
    int accountCreated = 0;







    //menu
    while (1) {
        printf("\n\n\n\n\t\t\t\t\t                            ::::::::::::::::::: BANK SYSTEM ::::::::::::::::::::");
        printf("\n\n\t\t\t\t\t                              1 Open New Account          2 Deposit Money\n");
        printf("\n\n\t\t\t\t\t                              3 Withdraw Money            4 Display Client \n");
        printf("\n\n\t\t\t\t\t                                               5 Exit\n");
        printf("\n\n\t\t\t\t\t                                       Enter your choice: ");
        scanf("%d", &choice);








        //case 1
        switch (choice) {
            case 1:
                printf("\n\n\t\t\t\t\t                                         Opening a new account...\n");
                acceptAccNum(accountNumber);
                printf("\n\n\t\t\t\t\t                              Enter Name: ");
                scanf(" %[^\n]%*c", name);
                printf("\n\t\t\t\t\t                              Enter Address: ");
                scanf(" %[^\n]%*c", address);
                do {
                    printf("\n\n\t\t\t\t\t                              Enter Initial Balance (Min: 500.00): ");
                    scanf("%f", &balance);
                    if (balance < 500.00) {
                        printf("\n\n\t\t\t\t\t                                       Initial balance cannot be below 500.00. Try again.\n");
                    }
                } while (balance < 500.00);
                accountCreated = 1; 
                printf("\n\n\t\t\t\t\t                                       Account successfully created!\n");
                DisplayClientRec(accountNumber, name, address, balance); 
                break;









            //case 2
            case 2:
                if (!accountCreated) {
                    printf("\n\n\t\t\t\t\t                                    You need to open an account first!\n");
                    break;
                }
                float deposit;
                do {
                    printf("\n\n\t\t\t\t\t                                       Processing Deposit...\n");
                    deposit = acceptAmount();
                    if (deposit < 100.00) {
                        printf("\n\n\t\t\t\t\t                               Deposit amount must be at least 100.00. Try again.\n");
                    }
                } while (deposit < 100.00);
                balance = computeDepBalance(balance, deposit);
                printf("\n\n\t\t\t\t\t                               Deposit Successful! New Balance: %.2f\n", balance);
                break;








            //case 3
            case 3:
                if (!accountCreated) {
                    printf("\n\n\t\t\t\t\t                                    You need to open an account first!\n");
                    break;
                }
                if (balance == 500.00) {
                    printf("\n\n\t\t\t\t\t                               Withdrawal not available. Balance is exactly 500.00.\n");
                    break;
                }
                float withdrawal;
                do {
                    printf("\n\n\t\t\t\t\t                                       Processing Withdrawal...\n");
                    withdrawal = acceptAmount();
                    if (balance - withdrawal < 500.00) {
                        printf("\n\n\t\t\t\t\t                               Insufficient balance! Balance cannot go below 500.00. Try again.\n");
                    }
                } while (balance - withdrawal < 500.00);
                balance = computeWithBalance(balance, withdrawal);
                printf("\n\n\t\t\t\t\t                               Withdrawal Successful! New Balance: %.2f\n", balance);
                break;








            //case 4
            case 4:
                if (!accountCreated) {
                    printf("\n\n\t\t\t\t\t                                    You need to open an account first!\n");
                    break;
                }
                DisplayClientRec(accountNumber, name, address, balance);
                break;








            //case 5
            case 5:
                printf("\n\n\t\t\t\t\t                                       Exiting the program. Thank you!\n");
                exit(0);








            //default
            default:
                printf("\n\n\t\t\t\t\t                                Invalid choice! Please enter a valid option.\n");
        }
    }




    return 0;
}
