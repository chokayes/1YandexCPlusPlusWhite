//
//  16_files.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/9/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main16() {
    //read file
//    ifstream input("hello.txt");
//
//    if (input.is_open()) {
//        string line;
//        while (getline(input, line)) {
//            cout << line << endl;
//        }
//    } else {
//        cout << "error" << endl;
//    }
    
    
    //read to string
//    ifstream dates("dates.txt");
//    if (dates.is_open()) {
//        string year;
//        string month;
//        string day;
//
//        getline(dates, year, '-');
//        getline(dates, month, '-');
//        getline(dates, day, '-');
//
//        cout << year << "-" << month << "-" << day << endl;
//    } else {
//        cout << "error" << endl;
//    }
    
    
    //read to int
//    ifstream dates("dates.txt");
//    if (dates.is_open()) {
//        int year;
//        int month;
//        int day;
//
//        dates >> day;
//        dates.ignore(1);
//        dates >> month;
//        dates.ignore(1);
//        dates >> year;
//        dates.ignore(1);
//
//        cout << day << "-" << month << "-" << year << endl;
//    } else {
//        cout << "error" << endl;
//    }
    
    
    //write to file
//    string fileName = "output.txt";
//
//    ofstream output(fileName, ios::app);
//    output << "world" << endl;
//
//    ifstream input(fileName);
//    if (input.is_open()) {
//        string line;
//        while (getline(input, line)) {
//            cout << line << endl;
//        }
//    } else {
//        cout << "error" << endl;
//    }
    
    
    //vectors and files
    vector<string> strings { "a", "b", "c" };
    vector<float> ints { 1, 0.02, 0.000003 };
    
    cout << setfill('.') << left;
    for (auto& str : strings) {
        cout << setw(10) << str << ", ";
    }
    cout << endl;
    
    cout << fixed << setprecision(2);
    for (auto& i : ints) {
        cout << setw(10) << i << ", ";
    }
    cout << endl;
    
    return 0;
}
