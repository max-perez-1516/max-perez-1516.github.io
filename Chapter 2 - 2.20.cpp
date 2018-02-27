//
//  main.cpp
//  2.20
//
//  Created by Max Perez on 2/26/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int radius{};
    double pie{ 3.14159 };
    
    cout << "Enter the radius of your circle: ";
    cin >> radius;
    
    cout << "Diameter = " << 2 * radius << endl;
    cout << "Circumference = " << (2 * pie)*radius << endl;
    cout << "Area = " << pie * pow(radius, 2) << endl;
}
