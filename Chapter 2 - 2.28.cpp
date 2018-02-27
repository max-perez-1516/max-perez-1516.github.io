//
//  main.cpp
//  2.28
//
//  Created by Max Perez on 2/26/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

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
