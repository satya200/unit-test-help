#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<fstream>
using namespace std;

class IDatabase {
public:
    virtual void storeDB(float balance) = 0;
    virtual float readDB() = 0;
};

class Bank : public IDatabase {
private:
    float balance;
public:
    //Bank(IDatabase* db) : db(db), balance(db->readDB()) {}
    Bank(IDatabase* db) : db(db) {
        // Delay the call to readDB until after the object is fully constructed
    }
    void initialize() {
        balance = db->readDB();
    }

    void deposit(float amount);
    void withdraw(float amount);
    void displayBalance();

    void storeDB(float balance) override;
    float readDB() override;

private:
    IDatabase* db;
};

#endif
