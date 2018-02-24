//
//  main.cpp
//  Chapter 3 - 3.12
//
//  Created by Max Perez on 2/23/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>

using namespace std;

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
int main(){
    Date storeCal(-5,13,1990); // bad value and correts itself to 1
    storeCal.displayDate();
    return 0;
}
