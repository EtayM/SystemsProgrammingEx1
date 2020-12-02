#include <stdio.h>
#include "myBank.c"

int main() {
    enum Action {
        OPEN_ACCOUNT = 'O',
        BALANCE_INQUIRY = 'B',
        DEPOSIT = 'D',
        WITHDRAWAL = 'W',
        CLOSE_ACCOUNT = 'C',
        INTEREST = 'I',
        PRINT = 'P',
        EXIT = 'E',
        NONE = 0
    };
    char action = NONE;
    printf("Please choose a transaction type:\nO-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
    while(action != EXIT) {
        scanf(" %c", &action);
        switch (action) {
            case OPEN_ACCOUNT:
                break;
            case BALANCE_INQUIRY:
                printf("Please enter amount for deposit: ");
                double initialAmount;
                if (scanf(" %lf", &initialAmount) != 1) {
                    printf("Failed to read the amount\n");
                    break;
                }
                if (initialAmount < 0) {
                    printf("Invalid Amount\n");
                    break;
                }
                    openAccount(initialAmount);
                break;
            case DEPOSIT:
                break;
            case WITHDRAWAL:
                break;
            case CLOSE_ACCOUNT:
                break;
            case INTEREST:
                break;
            case PRINT:
                break;
            case NONE:
                break;
            case EXIT:
                break;
            default:
                printf("Invalid transaction type\n");
                break;
        }
        printf("Please choose a transaction type:\nO-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
    }

    //if reached here user typed E, so we need to close all accounts and exit the program.
    printf("EXITING\n\n");

}