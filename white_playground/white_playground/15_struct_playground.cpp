//
//  15_struct_playground.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/9/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>

struct Day {
    int val;
    
    //explicit forbids calls like this "Day d = 1;"
    explicit Day(int val) {
        this->val = val;
    }
};

struct Month {
    int val;
    
    explicit Month(int val) {
        this->val = val;
    }
};

struct Year {
    int val;
    
    explicit Year(int val) {
        this->val = val;
    }
};

struct Date {
    int day;
    int month;
    int year;
    
    Date(Day day, Month month, Year year) {
        this->day = day.val;
        this->month = month.val;
        this->year = year.val;
    }
};

int main15() {
    //Day d = 1; //forbidden
    
    //readable code with explicit and seoparate structs for each parameter of the method.
    //code gets less error-prone
    Date date = { Day(10), Month { 11 }, Year { 1995 } };
    
    return 0;
}
