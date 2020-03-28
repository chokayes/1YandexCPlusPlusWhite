//
//  9_vector.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void populateArray(vector<string>& v) {
    //assigning the value by using a reference "&" character
    for (string& s : v) {
        cin >> s;
    }
}

void printVector(vector<string>& v) {
    //printing is possible either with a reference, or without it
    for (string& s : v) {
        cout << s << endl;
        s = "new";
    }
}

int main9() {
//    int n;
//    cin >> n;
//
//    vector<string> v(n);
//    populateArray(v);
//    printVector(v);
//    printVector(v);
    
    //vector only with false values
    vector<bool> falseBools(10, false);
    
    
    vector<int> vs(2);
    cout << "size before insertions " << vs.size() << endl;
    //elements are added as new elements, so array gets bigger
    vs.push_back(1);
    vs.push_back(2);
    cout << vs[0] << endl;
    cout << vs[1] << endl;
    cout << vs[2] << endl;
    cout << vs[3] << endl;
    cout << "size after insertions " << vs.size() << endl;
    //set new size
    vs.resize(8);
    cout << "size after resize " << vs.size() << endl;
    cout << vs[2] << " stay unchanged" << endl;
    cout << vs[3] << " stay unchanged" << endl;
    cout << vs[6] << " new element" << endl;
    cout << vs[7] << " new element" << endl;
    //resize + set all elements to a single value
    vs.assign(4, 90);
    cout << vs[0] << " after assign" << endl;
    cout << vs[1] << " after assign" << endl;
    cout << vs[2] << " after assign" << endl;
    cout << vs[3] << " after assign" << endl;
    
    return 0;
}
