//
//  main.cpp
//  hjdfjc
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
    
   
    


//2.20


    int radius{};
    double pie{ 3.14159 };
    
    cout << "Enter the radius of your circle: ";
    cin >> radius;
    
    cout << "Diameter = " << 2 * radius << endl;
    cout << "Circumference = " << (2 * pie)*radius << endl;
    cout << "Area = " << pie * pow(radius, 2) << endl;


//2.28


    string numb;
    cout << "enter a four digit number: ";
    cin >> numb;
    for (int i = 3; i >= 0; i --){
        cout << numb[i] << "  ";
    }
    cout << endl;
    
   


//2.30


    
    float weight, height;
    
    cout << "Enter your weight (in Lbs.): ";
    cin >> weight;
    cout << "Enter your height (in In.): ";
    cin >> height;
    
    cout << "Your BMI is: " << ((weight * 703)/(height*height)) << endl;
    
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5 " << endl;
    cout << "Normal: between 18.5 and 24.9 " << endl;
    cout << "Overwight: between 25 and 29.9 " << endl;
    cout << "Obese: 30 or greater " << endl;
    
    return 0;
    
    
}
