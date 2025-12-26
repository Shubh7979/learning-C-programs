#include <stdio.h>

// Function to display welcome message
void welcome() {
    printf("================\n");
    printf("Welcome To Fortune Bank\n");
    printf("================\n");
}

// Function to display current balance
void printBalance(int bal) {
    printf("Your balance: %d \n", bal);
    printf("================\n");
}

// Function to return current interest rate
int rates() {
    int interest = 5;
    return interest;
}

// Function to deposit money
int deposit(int balance, int amount) {
    balance += amount;
    return balance;
}

int main() {
    int balance = 1000;  // Initial balance
    int amount;

    welcome();

    // Show balance
    printBalance(balance);

    // Show interest rates
    printf("Current Interest Rates: %d %% \n", rates());

    // Deposit process
    printf("\nEnter amount to deposit: ");
    scanf("%d", &amount);

    balance = deposit(balance, amount);

    printf("After deposit, ");
    printBalance(balance);

    return 0;
}

