//
//  7_const_ref.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Person {
    string name;
    int age;
};

void initPopulation(vector<Person>& p) {
    for (int i = 0; i < 10000000; i++) {
        p.push_back({ "hello", i });
    }
}

void printPopulationSizeByCopy(const vector<Person> p) {
    cout << "Population size " << p.size() << endl;
}

//pass by reference results in 0 execution time for this function
//one more advantage of using reference is that we are not allowed to change vector in a function,
//which is intended only for reading collection
void printPopulationSizeByRef(const vector<Person>& p) {
    cout << "Population size " << p.size() << endl;
    
    //compilation error
    //p.push_back({ "Man", 100 });
}

int main7() {
    vector<Person> people;
    
    auto start = steady_clock::now();
    initPopulation(people);
    auto finish = steady_clock::now();
    cout << duration_cast<milliseconds>(finish - start).count() << " initPopulation" << endl;
    
    start = steady_clock::now();
    printPopulationSizeByCopy(people);
    finish = steady_clock::now();
    cout << duration_cast<milliseconds>(finish - start).count() << " printPopulationSize (copy)" << endl;
    
    start = steady_clock::now();
    printPopulationSizeByRef(people);
    finish = steady_clock::now();
    cout << duration_cast<milliseconds>(finish - start).count() << " printPopulationSize (ref)" << endl;
    
    return 0;
}
