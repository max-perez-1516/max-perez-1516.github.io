//
//  main.cpp
//  2.16
//
//  Created by Max Perez on 2/26/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>

using namespace std;

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
