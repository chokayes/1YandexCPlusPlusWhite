//
//  17_in_out_overloading.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/9/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <fstream>

#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

struct Duration {
    int hours;
    int mins;
};

ostream& operator<<(ostream& os, const Duration& duration) {
    os << setfill('0');
    os << setw(2) << duration.hours << ":" << setw(2) << duration.mins;
    
    return os;
}

istream& operator>>(istream& is, Duration& duration) {
    is >> duration.hours;
    is.ignore(1);
    is >> duration.mins;
    
    return is;
}

Duration operator+(const Duration& a, const Duration& b) {
    return { a.hours + b.hours, a.mins + b.mins };
}

bool operator<(const Duration& a, const Duration& b) {
    if (a.hours < b.hours) {
        return true;
    }
    
    if (a.hours == b.hours) {
        return a.mins < b.mins;
    }
    
    return false;
}

template<typename T>
void printVector(const vector<T>& v) {
    cout << v.size() << endl;
    for (auto& item : v) {
        cout << item << ", ";
    }
    cout << endl;
}

int main17() {
    //streams overloading
//    stringstream duration_ss("10:20");
//    Duration d;
//    duration_ss >> d;
//    cout << d << endl;
//
//    stringstream empty_ss;
//    Duration duration { 11, 36 };
//    empty_ss << duration;
//    cout << empty_ss.str() << endl;
    
    
    //math operators overloading
    Duration duration = Duration { 2, 20 } + Duration { 4, 15 };
    cout << duration << endl;
    
    vector<Duration> dur { { 3, 15 }, { 4, 20 }, { 0, 15 } };
    sort(begin(dur), end(dur));
    printVector(dur);
    return 0;
}
