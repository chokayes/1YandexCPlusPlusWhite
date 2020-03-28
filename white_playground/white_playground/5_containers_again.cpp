//
//  5_containers_again.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main5() {
    map<string, int> mapping = { { "one", 1 }, { "two", 2 }, { "three", 3 } };
    
    for (auto pair : mapping) {
        cout << pair.first << " " << pair.second << endl;
    }
    
    return 0;
}
