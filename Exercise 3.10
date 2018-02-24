//
//  main.cpp
//  Exercise: 3.10
//
//  Created by Max Perez on 2/23/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

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

int main() {
    Invoice storeInvoice("drill","bit",4,5);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;
    storeInvoice.setdisc(.25);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;
    storeInvoice.setprice(10);
    cout << "The price of " << storeInvoice.getpartDescription() << " is $" << storeInvoice.getInvoice() << endl;
}
