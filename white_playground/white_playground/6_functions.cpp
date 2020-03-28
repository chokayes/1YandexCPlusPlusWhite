//
//  6_functions.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void valuesArePassedByValue(int x) {
    x = 42;
}

//you need just to add "&" after type declaration
void swapByReference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void sortArray(vector<int>& nums) {
    sort(begin(nums), end(nums));
}

int main6() {
//    int a = 5;
//    valuesArePassedByValue(a);
//    cout << a << endl;
//
//    int c = 1;
//    int d = 2;
//    swapByReference(c, d);
//    cout << c << " " << d << endl;
    
//    vector<int> nums = { 1, 10, 4, 8, 0, -1 };
//    sortArray(nums);
//    for (auto num : nums) {
//        cout << num << ", ";
//    }
//    cout << endl;
    
    return 0;
}
