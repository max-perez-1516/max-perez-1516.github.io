//
//  Commission Employee.hpp
//  Chapter 11 Exercises
//
//  Created by Max Perez on 6/11/18.
//  Copyright © 2018 Max Perez. All rights reserved.
//

#ifndef Commission_Employee_hpp
#define Commission_Employee_hpp

#include <stdio.h>
#include <string> // C++ standard string class

class CommissionEmployee {
public:
    CommissionEmployee(const std::string&, const std::string&,
                       const std::string&, double = 0.0, double = 0.0);
    
    void setFirstName(const std::string&); // set first name
    std::string getFirstName() const; // return first name
    
    void setLastName(const std::string&); // set last name
    std::string getLastName() const; // return last name
    
    void setSocialSecurityNumber(const std::string&); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN
    
    void setGrossSales(double); // set gross sales amount
    double getGrossSales() const; // return gross sales amount
    
    void setCommissionRate(double); // set commission rate (percentage)
    double getCommissionRate() const; // return commission rate
    
    double earnings() const; // calculate earnings
    std::string toString() const; // create string representation
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};

#endif /* Commission_Employee_hpp */
