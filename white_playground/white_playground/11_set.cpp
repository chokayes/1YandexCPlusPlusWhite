//
//  11_set.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

template<typename T>
void printSet(set<T>& s) {
    cout << "set size = " << s.size() << endl;
    for (auto item : s) {
        cout << item << endl;
    }
}

int main11() {
//    set<string> people;
//    people.insert("Artsiom");
//    people.insert("Ivan");
//    printSet(people);
//
//    people.erase("Artsiom");
//    printSet(people);
    
    
    //set from vector
    vector<string> v = { "a", "b", "a" };
    set<string> s(begin(v), end(v));
    printSet(s);
    
    return 0;
}
