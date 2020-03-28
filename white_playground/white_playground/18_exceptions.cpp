//
//  18_exceptions.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/9/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

struct Duration {
    int day;
    int month;
    int year;
};

void checkNextSymbol(stringstream& ss) {
    if (ss.peek() != '/') {
        stringstream exc_ss;
        exc_ss << "expected /, but received " << char(ss.peek());
        throw runtime_error(exc_ss.str());
    }
    
    ss.ignore(1);
}

Duration parseDuration(const string& date) {
    Duration duration;

    stringstream ss(date);
    ss >> duration.day;
    checkNextSymbol(ss);
    ss >> duration.month;
    checkNextSymbol(ss);
    ss >> duration.year;

    return duration;
}

ostream& operator<<(ostream& os, Duration& duration) {
    os
    << setw(2) << setfill('0') << duration.day << "/"
    << setw(2) << setfill('0') << duration.month << "/"
    << duration.year;
    return os;
}

int main() {
    string date = "10111/1995";
    
    try {
        Duration duration = parseDuration(date);
        cout << duration << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
