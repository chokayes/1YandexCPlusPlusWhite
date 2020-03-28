//
//  4_zuweisung.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main4() {
    //c++ makes a deep copy
    string a = "hello";
    string b = a;
    
    b += ", world!";
    
    cout << a << endl;
    cout << b << endl << endl;
    
    //array is also deep-copied
    vector<string> vec_a = { "a", "b", "c" };
    vector<string> vec_b;
    vec_b = vec_a;
    vec_b[0] = "x";
    
    cout << vec_a[0] << " " << vec_a[1] << endl;
    cout << vec_b[0] << " " << vec_b[1] << endl;
    
    return 0;
}
