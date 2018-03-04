//
//  main.cpp
//  Chapter 5 Exercises
//
//  Created by Max Perez on 3/3/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//


//  5.18
//  Assume that x = 7, y = 5 and z = 3. What does each of the following statements print?
//
//  a) cout << (x == 7 && y ==5) << endl;
//
//  b) cout << (x == 7 || y == 3) << endl;
//
//  c) cout << (x == 7 && y == 3) << endl;
//
//  d) cout << (z == 7 || y == 3) << endl;
//
//  e) cout << (x - 2 == 5 && y + 4 == 9) << endl;
//
//  f) cout << (x >= 7 || y <= 5) << endl;
//
//  g) cout << (y != 6 && z!= 3) << endl;
//
//  h) cout << (y != 5 || z != 6) << endl;
//
//  i) cout << (! (y - z - 2)) << "\t" << (! (y > z)) << endl;


#include <iostream>
#include <cmath>

using namespace std;

void ex5_18() {

    int x{7};
    int y{5};
    int z{3};

    // a)
    cout << "a) " << (x == 7 && y == 5) << endl;
    // This returns 1 because this statement is true.

    // b)
    cout << "b) " << (x == 7 || y == 3) << endl;
    // This returns 1 because this statement is also true.

    // c)
    cout << "c) " << (x == 7 && y == 3) << endl;
    // This returns false becuse y cannot equal three while x equals 7.

    // d)
    cout << "d) " << (z == 7 || y == 3) << endl;
    // This returns flase because z or y do not euqal either vaule that they are initialized at.

    // e)
    cout << "e) " << (x - 2 == 5 && y + 4 == 9) << endl;
    // This returns true since x - 2 == 7, and 5 + 4 == 9.

    // f)
    cout << "f) " << (x >= 7 || y <= 5) << endl;
    // This returns true since x or 7 is indeed greater than or equal to 7, and y or 5 is indeed lesser than or equal to 5.

    // g)
    cout << "g) " << (y != 6 && z!= 3) << endl;
    // This returns false since z was initialized as 3.

    // h)
    cout << "h) " << (y != 5 || z != 6) << endl;
    // This returns true since z is initialized as 3 and this function is an or function.

    // i)
    cout << "i) " << (! (y - z - 2)) << "\t" << (! (y > z)) << endl;
    // This first returns true since the value being multiplied to then compare y > z is less than z.

}

void ex_pi(){

    long i;

    cout << "Enter a positive integer: ";
    cin >> i;

    for (int value = 1; value <= i; value++) {
        double pi;
        if (value == 1) {
            pi = 4;
            cout << value << ":" << pi << endl;
        }
        else if (value % 2 == 1) {
            pi = 4 + (4/((2 * value) - 1));
            cout << value << ":" << pi << endl;
        }
        else {
            pi = 4 - (4/((2 * value) - 1));
            cout << value << ":" << pi << endl;
        }
    }
}

void ex5_20(){
    
    
    int w, v, u; // declaring a variable for each for loop

    for (w = 1; w <= 500; w++) {
        // decalring the ammount of times the for loop can run and when the loop is called w will increase by one.
       
        for (v = 1; v <= 500; v++) {
          
            for (u = 1; u <= 500; u++) {
         
                if (( w * w ) + ( v * v) == (u * u) && u <= 500)
                    cout << w << " + " << v << " = " << u << endl;
            }
        }
    }
}

void ex5_22(){
   
    // a)  !((x <= 6) && (y % 2 == 1))
    //
    //  This above statement is equal to:
    //      (!(x <= 6)) || (!(y % 2 == 1))
    //
    // b)  !((a < 4) || (b >= 6))
    //
    //  This above statement is equal to:
    //      !(a < 4) && !(b >= 6)
    //
    // c)  !(x < 3) && !(y >= 2)
    //
    //  This above statement is equal to:
    //      !((x < 3) || (y >= 2))
    //
    // d)  !(a == b) || !(b != 2)
    //
    //  This above statement is equal to:
    //      !((a == b) && (b != 2))
    //
    //
    
    
    int x, y;
    int a{1}, b{1};

    cout << "!((x <= 6) && (y % 2 == 1)) = " << !((x <= 6) && (y % 2 == 1)) << endl;
    cout << "(!(x <= 6)) || (!(y % 2 == 1)) = " << (!(x <= 6) || !(y % 2 == 1)) << endl;
    cout << "These two Expressions are the same" << endl;
    
    cout << "!((a < 4) || (b >= 6)) = " << !((a < 4) || (b >= 6)) << endl;
    cout << "!(a < 4) && !(b >= 6) = " << (!(a < 4) && !(b >= 6)) << endl;
    cout << "These two Expressions are the same" << endl;
    
    cout << "!(x < 3) && !(y >= 2) = " << (!(x < 3) && !(y >= 2)) << endl;
    cout << "!((x < 3) || (y >= 2)) = " << !((x < 3) || (y >= 2)) << endl;
    cout << "These two Expressions are the same" << endl;
    
    cout << "!(a == b) || !(b != 2) = " << (!(a == b) || !(b != 2)) << endl;
    cout << "!((a == b) && (b != 2)) = " << !((a == b) && (b != 2)) << endl;
    cout << "These Two Expressions are the same" << endl;
    
}

int main(){
    
    //ex5_18();
    //ex_pi();
    //ex5_20();
    //ex5_22();
}
