//
//  Chapter 2 Exercises.cpp
//  2.20
//
//  Created by Max Perez on 2/26/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//2.16

int main()
{
    float numb1, numb2;
    
    cout << "enter two integers (separated by a space): ";
    cin >> numb1;
    cin >> numb2;
    
    cout << "Addition solution: " << (numb1 + numb2) << endl;
    cout << "Subtraction solution: " << (numb1 - numb2) << endl;
    cout << "Multiplication solution: " << (numb1 * numb2) << endl;
    cout << "Division solution: " << (numb1 / numb2) << endl;
    
    return 0;
    
}

//2.20

int main() {
    int radius{};
    double pie{ 3.14159 };
    
    cout << "Enter the radius of your circle: ";
    cin >> radius;
    
    cout << "Diameter = " << 2 * radius << endl;
    cout << "Circumference = " << (2 * pie)*radius << endl;
    cout << "Area = " << pie * pow(radius, 2) << endl;
}

//2.28

int main(){
    string numb;
    cout << "enter a four digit number: ";
    cin >> numb;
    for (int i = 3; i >= 0; i --){
        cout << numb[i] << "  ";
    }
    cout << endl;
    
    return 0;
}


