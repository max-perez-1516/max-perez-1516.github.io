//
//  main.cpp
//  4.13
//
//  Created by Max Perez on 2/28/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>

using namespace std;

// Each excersize is in a void function which is called by main. Each excersise has been commeneted out so you are able to run them at your discretion.


// 4.13

void ex4_13() {
    double totk{0};
    double totl{0};
    
    double kil{0};
    double lit{0};
    
    while (true) {
        cout << "Enter Number of Kilometers Driven: ";
        cin >> kil;
        if (kil <= 0) {
            break;
        }
        cout << "Enter Liters Used: ";
        cin >> lit;
        
        cout << "Kms per liter this trip: " << (kil / lit) << endl;
        
        totk = totk + kil;
        totl = totl + lit;
        
        cout << "Total Kilometers per Liter: " << (totk / totl) << endl;
        
        cout << endl;
    }
    
}

// 4.17

void ex4_17() {
    int counter{0};
    int number{0};
    int largest{0};
    
    while (counter <= 10) {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number > largest) {
            largest = number;
        }
        counter = counter + 1;
        
    }
    cout << largest << endl;
}

// 4.26

void ex4_26() {
    int size{0};
    
    cout << "Choose a Number Between 1-20: ";
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1) {
                cout << "*";
            }
            else if (j == 0 || j == size - 1) {
                cout << "*";
                
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// 4.35

void ex4_35a() {
    
    int n;
    int l = 1;
    int factorial = 1;
    
    cout << "Enter a positive number: ";
    cin >> n;
    
    while (l <= n) {
        factorial = factorial * l;
        ++l;
    }
    cout << "The Factorial of " << n << " is " << factorial << endl;
}

void ex4_35b() {
    
    int degreeOfAcc;
    long double e = 1;
    int n;
    int l = 1;
    
    cout << "Enter degree of accuracy: ";
    cin >> degreeOfAcc;
    cout << "Enter a positive number: ";
    cin >> n;
    
    while (l <= degreeOfAcc) {
        int conter = l;
        int inital = l;
        long double number = l;
        int counter = 1;
        
        while (conter > 1) {
            number = number*(inital - counter);
            counter++;
            conter--;
        }
        e += (1/number);
        l++;
    }
    cout << "The Mathmatical constant e at " << degreeOfAcc <<  " degrees of accuracy is " << e << endl;
}

//4.36

void ex4_36() {
    class Account {
    public:
        // Account constructor with two parameters
        Account(string accountName, double initialBalance)
        : name{accountName} {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }
        void deposit(double depositAmount) {
            if (depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }
        double getBalance () const {
            return balance;
        }
        
        void withdraw(double withdrawAmount) {
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
}

int main(){
    
    //take screenshots
    //ex4_13();
    //ex4_17();
    //ex4_26();
    //ex4_35a();
    //ex4_35b();
    //ex4_36();
}
