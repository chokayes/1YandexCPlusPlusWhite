//
//  13_struct.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/7/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

struct Car {
    Person owner;
    string model;
};

int main13() {
    Person p1;
    p1.name = "Anna1";
    p1.age = 20;
    
    //short init
    Person p2 = { "Anna2", 22 };
    
    //nested init
    Car car = {
        { "Anna3", 23 },
        "Tesla Model X"
    };
    
    Car newCar { "N", 24 };
    
    return 0;
}
