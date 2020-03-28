//
//  main.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main2(int argc, const char * argv[]) {
    string str = "abcdefgh";
    for (auto c : str) {
        cout << c << ", ";
    }
    cout << endl;
    
    vector<int> nums = { 1, 4, 2, 3, 4, 100, 4 };
    for(auto num : nums) {
        cout << num << ", ";
    }
    cout << endl;
    
    int num_of_fours = count(begin(nums), end(nums), 4);
    cout << "Number of fours in the array " << num_of_fours << endl;
    
    sort(begin(nums), end(nums));
    for (auto num : nums) {
        cout << num << ", ";
    }
    cout << endl;
    
    return 0;
}
