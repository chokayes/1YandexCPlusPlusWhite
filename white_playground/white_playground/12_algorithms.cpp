//
//  12_algorithms.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename T>
void printVector(vector<T> v) {
    for (auto item : v) {
        cout << item << ", ";
    }
    cout << endl;
}

void incrementByCopy(vector<int>& v) {
    for (auto i : v) {
        i++;
    }
}

void incrementByRef(vector<int>& v) {
    //auto& - reference of an element
    for (auto& i : v) {
        i++;
    }
}

int main12() {
//    cout << min("abc", "abd") << endl;
    
//    vector<int> v { 19, 10, 5, 20, 6, 0 };
//    printVector(v);
//    sort(begin(v), end(v));
//    printVector(v);
//
//    int count = count_if(begin(v), end(v), [](int i) { return i > 10; });
//    cout << "Number of elements greater than 10  is " << count << endl;

    vector<int> vec { 1, 2, 3, 4 };
    cout << "Original array " << endl;
    printVector(vec);
    cout << endl;
    
    incrementByCopy(vec);
    cout << "Array incremented by copy" << endl;
    printVector(vec);
    cout << endl;
    
    
    incrementByRef(vec);
    cout << "Array incremented by ref" << endl;
    printVector(vec);
    cout << endl;
    
    return 0;
}
