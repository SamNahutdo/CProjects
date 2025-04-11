#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Client {
    int accNum;
    char name[50];
    char address[100];
    float balance;
};

int acceptAccNum() {
    int accNum;
    printf("\n\t\t\t\t\t                                 ***New Account*** ");
    printf("\n\t\t\t\t\t                                Enter Gcash number: ");
    scanf("%d", &accNum);
    return accNum;
}

float acceptAmount() {
    float amount;
    printf("\n\t\t\t\t\t                                Enter amount: ");
    scanf("%f", &amount);
    return amount;
}

float computeDepBalance(float balance, float deposit) {
    return balance + deposit;
}

float computeWithBalance(float balance, float withdraw) {
    return balance - withdraw;
}

void displayClientRec(struct Client client) {
    printf("\n\n\t\t\t\t\t                                Gcash Account:\n");
    printf("\n\t\t\t\t\t                                Gcash Number:       %d\n", client.accNum);
    printf("\n\t\t\t\t\t                                Name:               %s\n", client.name);
    printf("\n\t\t\t\t\t                                Address:            %s\n", client.address);
    printf("\n\t\t\t\t\t                                Balance:            %.2f\n", client.balance);
}

void createNewAccount(struct Client *client) {
    printf("\n\t\t\t\t\t           Are you sure you want to continue? Your recent account will be removed.\n\n");

    client->accNum = acceptAccNum();

    printf("\n\t\t\t\t\t                                Enter your Gcash Name: ");
    getchar(); 
    fgets(client->name, sizeof(client->name), stdin);
    client->name[strcspn(client->name, "\n")] = '\0';

    printf("\n\t\t\t\t\t                                Enter your full address: ");
    fgets(client->address, sizeof(client->address), stdin);
    client->address[strcspn(client->address, "\n")] = '\0';

    do {
        printf("\n\t\t\t\t\t                                Enter initial balance (must be at least 500.00): ");
        scanf("%f", &client->balance);
        if (client->balance < 500.00) {
            printf("\n\t\t\t\t\t                                Initial balance must be at least 500.00. Please try again.\n");
        }
    } while (client->balance < 500.00);

    printf("\n\t\t\t\t\t                                New account created successfully!\n");
}

void cashIn(struct Client *client) {
    if (client->accNum == 0) {
        printf("\n\t\t\t\t\t                          Please create a new account first.\n");
        return;
    }

    float amount = acceptAmount();

    if (amount >= 100.00) {
        client->balance = computeDepBalance(client->balance, amount);
        printf("\n\t\t\t\t\t                           Deposit successful! New balance: %.2f\n", client->balance);
    } else {
        printf("\n\t\t\t\t\t                                Deposit amount must be at least 100.00\n");
    }
}

void cashOut(struct Client *client) {
    if (client->accNum == 0) {
        printf("\n\t\t\t\t\t                          Please create a new account first.\n");
        return;
    }

    float amount = acceptAmount();

    if (amount <= client->balance - 500.00) {
        client->balance = computeWithBalance(client->balance, amount);
        printf("\n\t\t\t\t\t                  Withdrawal successful! New balance: %.2f\n", client->balance);
    } else {
        printf("\n\t\t\t\t\t          Withdrawal would leave balance below 500.00. Transaction aborted.\n");
    }
}

int main() {
    struct Client client = {0};
    int option;

    while (1) {
        printf("\n\t\t\t\t\t                                    Choice Option\n");
        printf("\n\t\t\t\t\t                                1. Create a new account\n");
        printf("\n\t\t\t\t\t                                2. Cash In\n");
        printf("\n\t\t\t\t\t                                3. Cash Out\n");
        printf("\n\t\t\t\t\t                                4. View Gcash Account\n");
        printf("\n\t\t\t\t\t                                0. Exit\n");
        printf("\n\t\t\t\t\t                                Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                createNewAccount(&client);
                break;
            case 2:
                cashIn(&client);
                break;
            case 3:
                cashOut(&client);
                break;
            case 4:
                displayClientRec(client);
                break;
            case 0:
                printf("\n\t\t\t\t\t                                Exiting the program.\n");
                exit(0);
            default:
                printf("\n\n\t\t\t\t\t                                Invalid option. Please try again.\n\n");
        }
    }

    return 0;
}