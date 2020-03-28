//
//  Date.hpp
//  white_project
//
//  Created by Artsiom Kaliaha on 2/10/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <iostream>
#include <iomanip>

using namespace std;

struct Day {
    int val;
    explicit Day(int val) : val(val) { }
};

struct Month {
    int val;
    explicit Month(int val) : val(val) { }
};

struct Year {
    int val;
    explicit Year(int val) : val(val) { }
};

struct Date {
    int day;
    int month;
    int year;
};

struct DateCompare {
    bool operator() (const Date& lhs, const Date& rhs) const {
        if (lhs.year < rhs.year) {
            return true;
        } else if (lhs.year > rhs.year) {
            return false;
        }
        
        if (lhs.month < rhs.month) {
            return true;
        } else if (lhs.year > rhs.year) {
            return false;
        }
        
        if (lhs.day < rhs.day) {
            return true;
        }
        
        return false;
    }
};

inline ostream& operator<<(ostream& os, const Date& duration) {
    os << setfill('0');
    os << setw(2) << duration.day << "-" << setw(2) << duration.month << "-" << duration.year;
    
    return os;
}

#endif /* Date_hpp */
