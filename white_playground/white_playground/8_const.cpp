//
//  8_const.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main8() {
    const int a = 5;
    //a = 6; //compilation error
    int b = a + 1;
    cout << b << endl;
    
    const string word = "hello";
    //word = "new hello"; //compilation error
    string word2 = word + "!";
    cout << word2 << endl;
    
    const vector<string> words = { "hello" };
    //words.push_back("new hqello"); // const vector
    //words[0][0] = "H"; // const vector -> const elements of vector
    
    return 0;
}
