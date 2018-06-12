//
//  main.cpp
//  Chapter 11 Exercises
//
//  Created by Max Perez on 6/11/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//
/*
The following code it taken from the book.
 
 
 Comments regarding the reusability of composition code and inheritance:
    When composition is used over inheritance, there are typically various interfaces which represent different
behaviors that the specific system could exhibit. These characteristics are then explicitly defined
within each interface of the code, which allows for easier readability. This easier readability then
benifits any future coder who wishes to edit the code.
    These various interfaces also support polymorphic code, which allow for the coder to change the code to cater
towards object oriented programming. This gives the coder more flexibility when writing the program. After some reasearch
I found a nice example relating composition to inheritance: a break pedal and a shift knob of a car share very few common
traits, but are both very important to the car's overall performance.
    Some drawbacks of this method of coding, however, are that the various methods being coded into the program have to
be directly derived from the type. Inheritance, on the other hand, does not require at all for the user to
continueously define and re-implement methods within the derived class.

 I think that Inheritance has a higher practicality in coding, since its ability to produce such beautiful results
only depends on the coder's ability to identify the "is-a" relationship between the inherited object and it's parent.
 
 
 11.4:
    The (IS-A) relationship in object oriented programming is a concept wich regards inheritance.
The most basic example of an (IS-A) replationship would be A object (IS-A) B object, or an apple is a fruit, a macintosh
 is an apple product, etc.
    The (HAS-A) relationship (composition) regards an onject exhibiting a quality or method. From the book, an example of
a (HAS-A) relationship would be an Employee object has a birthday method.

 

*/


#include <iostream>

#include <iostream>
#include <iomanip>
#include "Employee Definitions.hpp"
using namespace std;

int main() {
    // instantiate BasePlusCommissionEmployee object
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-3333",
        5000, .04, 300};
    
    // get commission employee data
    cout << fixed << setprecision(2); // set floating-point formatting
    cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << employee.getFirstName()
    << "\nLast name is " << employee.getLastName()
    << "\nSocial security number is "
    << employee.getSocialSecurityNumber()
    << "\nGross sales is " << employee.getGrossSales()
    << "\nCommission rate is " << employee.getCommissionRate()
    << "\nBase salary is " << employee.getBaseSalary() << endl;
    employee.setBaseSalary(1000); // set base salary
    cout << "\nUpdated employee information from function toString: \n\n"
    << employee.toString();
    
    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}
