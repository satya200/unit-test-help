#include "bank.h"

void Bank::deposit(float amount) {
    //balance = readDB();
    balance += amount;
    db->storeDB(balance);
    cout << "Amount Deposited: " << amount << endl;
}

void Bank::withdraw(float amount) {
    if(amount <= balance) {
        balance -= amount;
        db->storeDB(balance);
        cout << "Amount Withdrawn: " << amount << endl;
    } else {
        cout << "Insufficient balance" << endl;
    }
}

void Bank::displayBalance() {
    cout << "Available Balance: " << balance << endl;
}

void Bank::storeDB(float balance) {
    // implementation goes here
}

float Bank::readDB() {
    // implementation goes here
}
