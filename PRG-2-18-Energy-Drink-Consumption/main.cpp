//
//  main.cpp
//  PRG-2-18-Energy-Drink-Consumption
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A soft drink company recently surveyed 16,500 of its customers and found that approximately
//  15 percent of those surveyed purchase one or more energy drinks per week. Of
//  those customers who purchase energy drinks, approximately 58 percent of them prefer
//  citrus-flavored energy drinks. Write a program that displays the following:
//  *The approximate number of customers in the survey who purchase one or more
//  energy drinks per week.
//  *The approximate number of customers in the survey who prefer citrus-flavored
//  energy drinks

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const float FLT_PERCENT_MULTIPLE = 0.15f;
    const float FLT_PERCENT_CITRUS = 0.58f;
    
    const int INT_CUSTOMERS_TOTAL = 16500;
    
    // Declare variables
    int intCustomersMultiple;
    int intCustomersCitrus;
    
    // Calculate variable values
    intCustomersMultiple = INT_CUSTOMERS_TOTAL * FLT_PERCENT_MULTIPLE;
    intCustomersCitrus = INT_CUSTOMERS_TOTAL * FLT_PERCENT_CITRUS;
    
    // Output results to the console
    cout << intCustomersMultiple << " customers purchase more than one drink.\n";
    cout << intCustomersCitrus << " customers prefer citrus-flavored drinks.\n";
    
    return 0;
}
