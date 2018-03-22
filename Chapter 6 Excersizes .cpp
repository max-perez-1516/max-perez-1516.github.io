//
//  main.cpp
//  Chapter 6 Excersizes
//
//  Created by Max Perez on 3/20/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>

using namespace std;

void ex6_24(){
    
    int a{0};
    int b{0};
    int quo{0};
    int remainder{0};
    int c[5];
    int sum;
    
    cout << "Enter value for Int A: ";
    cin >> a;
    
    cout << "Enter a value for Int B: ";
    cin >> b;

    quo = a/b;
    
    cout << "Quotient is: " << quo << endl;
    
    remainder = a % b;
    
    cout << "Remainder is: " << remainder << endl;
    
    sum = remainder + quo;

    
    while (sum > 1 && sum < 32767) {
        for (int i = 0; i < 5; i++){
            sum = c[i];
            cout << c[i] << "  " << endl;
         }
    }
}

//=============================================================================================================//


long timePassed(int, int, int); // creating a long variable which holds three ints (the number of days, hours, and months)

void ex6_25(){
    
    int day1, hour1, min1;
    
    cout << "Enter the starting number of: Days, Hours, and Seconds ";
    cin >> day1 >> hour1 >> min1;
    
    
    int day2, hour2, min2;
    
    cout << "Enter the finishing number of: Days, Hours, and Seconds ";
    cin >> day2 >> hour2 >> min2;

    
    cout << (timePassed(day2, hour2, min2) - timePassed(day1, hour1, min1));
    
}

long timePassed(int day, int hour, int min) {   // defining the time passed function
    
    if (hour > 12) {
        hour -= 12;
    }
    
    return (hour * 60) + (min * 60) + day;

}

// =============================================================================================================//

double celsius(double f);

double fahrenheit(double c);

void ex6_26(){
    
    cout << "Fahrenheit to Celcius from 0 to 100 " << endl;
}
double celsius(double f) {
    return (f - 32) * 5/9;  //  looked up the conversion from celsius to fahrenheit
}

double fahrenheit(double c) {    //  looked up the conversion from fahrenheit to celsius
    return (c * 9/5 + 32);
}

//===============================================================================================================//

bool isPerfect(long);                               //  creating a boolean called perfect, which will return if the mod j of k is zero, meaing the srt of the given
                                                    //  value is the same of itself.
void ex6_28isDundey(){
    
    cout << "This is used to test if a program is perfect " << endl;
    
    cout << "Perfect number between 1 and 100 " << endl;
    
    for (long i = 1; i <= 10000000000; i++) {
        
        if(isPerfect(i)) {
            cout << i << endl;
        }
    }
}

bool isPerfect(long j) {
    
    long sum = 0;
    
    for (long k = 0; k <= j / 2; k++) {
        if (j % k == 0) {
            sum += k;
        }
    }
    
    return sum == j;

}

//=================================================================================================================//

void ex6_30() {
    
    int x{1};
    int reverse{0};
    
    bool neg = false;
    
    cout << "Enter a integer you would like to be reversed: ";
    cin >> x;
    
    if (x < 0) {
        neg = true;
        x = -x;
    }
    while (x > 0) {                                 //  At first, I wanted to convert the int into a string and use the str.start() and str.end() functions to print
        reverse = reverse * 10 + x % 10;            //  the number in reverse. after some exploring on the web, however, I found a cool way of reversing the int using math.
        x = x / 10;                                 //  The number in question is multiplied by 10, then the x value is modded by ten. Then to reverse it, it is divided by 10.
    }
    if(neg){
        reverse = -reverse;                         //  This calls back the boolean, which states that if the number is negative, to add a negative to the reverse value.
    }
    cout << reverse << endl;                        //  prints out the finalized number
}

//===============================================================================================================//

int power(int, int);                    //  creating a function called power, which will hold two ints (base and an exponent) as seen in the book.

void ex6_36() {
    
    int base;                           //  int base will hold the base value entered by the user
    int exponent;                       // int exponent will hold the exponent value entered by the user
    
    cout <<  "Enter a base number for the calculation: ";       //  promts the user to enter the base number
    cin >> base;
    
    cout << "Enter an exponent number for the calculation: ";
    cin >> exponent;
    
    cout << "The solution - To the power of: " << base << exponent << power(base, exponent) << endl;
    
}

int power(int base, int exponent) {
    
    if (exponent == 0) {                //  if the exponent is zero, return the value as one. since the exponent wont change the value of the power.
        return 1;
    }
    else {
        return base * power(base, exponent - 1);        // based off of the hint from the book, I was able to decifer an equation which would fit the parameters
    }
}

//===============================================================================================================//

void ex6_40(){
    
    long timePassed2(int, int, int); // creating a long variable which holds three ints (the number of days, hours, and months)
    
    
    int day1, hour1, min1;
        
        cout << "Enter the starting number of: Days, Hours, and Seconds ";
        cin >> day1 >> hour1 >> min1;
        
        
        int day2, hour2, min2;
        
        cout << "Enter the finishing number of: Days, Hours, and Seconds ";
        cin >> day2 >> hour2 >> min2;
        
        
        cout << (timePassed(day2, hour2, min2) - timePassed(day1, hour1, min1));
        
}
    
long timePassed2(int day, int hour, int min) {   // defining the time passed function
        
        if (hour > 12) {
            hour -= 12;
        }
        
        return (hour * 60) + (min * 60) + day;
        
}

//=================================================================================================================//

unsigned int rollDice(); // rolls dice, calculates and displays sum

void ex6_47() {
    
        // scoped enumeration with constants that represent the game status
        enum class Status {CONTINUE, WON, LOST}; // all caps in constants
        
        // randomize random number generator using current time
        srand(static_cast<unsigned int>(time(0)));
        
        unsigned int myPoint{0}; // point if no win or loss on first roll
        Status gameStatus; // can be CONTINUE, WON or LOST
        unsigned int sumOfDice{rollDice()}; // first roll of the dice
        
        // determine game status and point (if needed) based on first roll
        switch (sumOfDice) {
            case 7: // win with 7 on first roll
            case 11: // win with 11 on first roll
                gameStatus = Status::WON;
                break;
            case 2: // lose with 2 on first roll
            case 3: // lose with 3 on first roll
            case 12: // lose with 12 on first roll
                gameStatus = Status::LOST;
                break;
            default: // did not win or lose, so remember point
                gameStatus = Status::CONTINUE; // game is not over
                myPoint = sumOfDice; // remember the point
                cout << "Point is " << myPoint << endl;
                break; // optional at end of switch
        }
        
        // while game is not complete
        while (Status::CONTINUE == gameStatus) { // not WON or LOST
            sumOfDice = rollDice(); // roll dice again
            
            // determine game status
            if (sumOfDice == myPoint) { // win by making point
                gameStatus = Status::WON;
            }
            else {
                if (sumOfDice == 7) { // lose by rolling 7 before point
                    gameStatus = Status::LOST;
                }
            }
        }
        
        // display won or lost message
        if (Status::WON == gameStatus) {
            cout << "Player wins" << endl;
        }
        else {
            cout << "Player loses" << endl;
        }
    }
    
    // roll dice, calculate sum and display results
    unsigned int rollDice() {
        int die1{1 + rand() % 6}; // first die roll
        int die2{1 + rand() % 6}; // second die roll
        int sum{die1 + die2}; // compute sum of die values
        
        // display results of this roll
        cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
        return sum;
    }

//===================================================================================================================//

int main(){
    
    ex6_24();
    
    ex6_25();
    
    ex6_26();
    
    ex6_28isDundey();
    
    ex6_30();
    
    ex6_36();
    
    ex6_40();
    
    ex6_47();
    
}
