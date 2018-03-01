//
//  main.cpp
//  Chapter 3 Exercises
//
//  Created by Max Perez on 3/1/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

//
//  main.cpp
//  Exercise 3.9
//
//  Created by Max Perez on 2/23/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


//3.09

void ex3_09(){
class Account {
public:
    // Account constructor with two parameters
    Account(string accountName, int initialBalance)
    : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    int getBalance () const {
        return balance;
    }
    
    void withdraw(int withdrawAmount) {
        if (withdrawAmount <= balance){
            balance = balance - withdrawAmount;
        }
        else if (withdrawAmount > balance){
            getBalance();
            cout << "Withdrawl ammount exceeded account balance. " << endl;
        }
    }
    
    void setName(string accountName){
        name = accountName;
    }
    string getName() const {
        return name;
    }
private:
    string name;
    int balance{0};
};

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain userint input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    
    cout << "\n Enter withdrawl ammount for account 1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << "from account1 balance";
    account1.withdraw(withdrawAmount);
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    
    
    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance
    
    cout << "\n Enter withdrawl ammount for account 2: ";
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << "from account2 balance";
    account2.withdraw(withdrawAmount);
    
    
    // display balances
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance() << endl;
}


//Ex3.10

void ex3_10(){
class Invoice {
    
private:
    string partNumber;
    string partDescription;
    int quantityItem;
    int price;
    double VAT;
    double disc;
    
public:
    
    Invoice(string partNumb, string partDescrip,
            int quantityI, int p) {
        partNumber = partNumb;
        partDescription = partDescrip;
        quantityItem = quantityI;
        price = p;
        VAT = .20;
        disc = .00;
    }
    string getpartNumber(){
        return partNumber;
    }
    void setpartNumber(string a){
        partNumber = a;
    }
    string getpartDescription(){
        return partDescription;
    }
    void setpartDescription(string a){
        partDescription = a;
    }
    int getquantityItem(){
        return quantityItem;
    }
    void setquantityItem(int a){
        if (a >= 0){
            quantityItem = a;
        }
    }
    int getprice(){
        return price;
    }
    void setprice(int a){
        if (a >= 0) {
            price = a;
        }
    }
    double getVAT(){
        return VAT;
    }
    void setVAT(double a){
        if (a >= 0) {
            VAT = a;
        }
    }
    double getdisc(){
        return disc;
    }
    void setdisc(double a){
        if (a >= 0) {
            disc = a;
        }
    }
    int getInvoice(){
        return quantityItem * price * (VAT + 1) * (1 - disc);
    }
};
    Invoice storeInvoice("drill","bit",4,5);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;
    storeInvoice.setdisc(.25);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;
    storeInvoice.setprice(10);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;

}

void ex3_12(){
    class Date {
        int month;
        int day;
        int year;
        
    public:
        Date(int m, int d, int y) {
            if ((m > 12) || (m < 1)){ // looked up or statement
                month = 1;
            }
            else {
                month = m; // m is the value they gave
            }
            day = d;
            year = y;
        }
        int getmonth(){
            return month;
        }
        void setmonth(int a){
            month = a;
        }
        int getday(){
            return day;
        }
        void setday(int a){
            month = a;
        }
        int getyear(){
            return year;
        }
        void setyear(int a){
            month = a;
        }
        void displayDate(){
            cout << month << "/" << day << "/" << year << endl;
        }
    };
}

// Ex 3.13

void ex3_13() {
    class Account {
    public:
        // Account constructor with two parameters
        Account(string accountName, int initialBalance)
        : name{accountName} {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }
        void deposit(int depositAmount) {
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }
        int getBalance () const {
            return balance;
        }
        
        void withdraw(int withdrawAmount) {
            if (withdrawAmount <= balance){
                balance = balance - withdrawAmount;
            }
            else if (withdrawAmount > balance){
                getBalance();
                cout << "Withdrawl ammount exceeded account balance. " << endl;
            }
        }
        
        void setName(string accountName){
            name = accountName;
        }
        string getName() const {
            return name;
        }
    private:
        string name;
        int balance{0};
    };
    
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "Adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account1.getName() << " balance is $" << account2.getBalance();
    
    
    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "Adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance() << endl;
}


int main() {
    //ex3_09();
    //ex3_10();
    //ex3_12();
    //ex3_13();
}




