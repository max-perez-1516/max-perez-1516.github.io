//
//  main.cpp
//  Chapter 7 Excersizes
//
//  Created by Max Perez on 3/19/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <array>

using namespace std;

void ex7_13() {
    
    int numbs[20];                                      //  initializing an array with 20 values
    int userInput;                                      //  creating a variable to store the userinput into the array 'numbs'
    bool matching = false;                              //  boolean to test if any values in the arrays are the same
    
    cout << "Please enter twenty numbers: " << endl;    //  prompting the user to enter ints which will be stored
    for(userInput = 0; userInput < 20; userInput++) {   //  for each value entered (under 20)
        cin >> numbs[userInput];                        //  store the values in an array.
    }
    
    
    cout<< numbs[0] << " ";
    
    for (int i = 1; i < 20; i++) {
        
        for (int j = 0; (j < i) && (matching == false); j++){
            if (numbs[i] == numbs[j]){
                matching = true;
            }
            if (matching != true){
                cout << numbs[i] << " " << endl;
            }
        }
    }
}

void ex7_32(){
    
    int array[10] = {2, 3, 5, 6, 100, 50, 46, 990, 20, 10};
    int number{1};
    
    for (int i{0}; i < 10; i++) {
        if (array[i] > number) {
            array[i] = number;
        }
    }
    cout << "The largest number is: " << number << endl;
}

int main () {
    ex7_13();
    ex7_32();
}
