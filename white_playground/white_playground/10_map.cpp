//
//  10_map.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

template<typename K, typename V>
void printMap(map<K, V>& events) {
    cout << "map size = " << events.size() << endl;
    for (auto pair : events) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main10() {
    //try adding and removing elements
//    map<int, string> events = {
//        { 1950, "c++" },
//        { 1941, "c" }
//    };
//    events[1970] = "UNIX";
//    printMap(events);
//
//    events.erase(1950); //existing key
//    events.erase(2000); //non-existing key w/o an exception
//    cout << "erased" << endl;
    
    
    //count each element in a vector
//    vector<string> words = { "one", "two", "one" };
//    map<string, int> entries;
//
//    for (string& s : words) {
//        //accessing an element creates a key, if doesn't exist.
//        //so we can avoid checking, whether an element exists ir not
//        ++entries[s]; //or entries[s]++;
//
//        //same code as "++entries[s];", but explained
//        //int& value = entries[s];
//        //value++;
//    }
//    printMap(entries);
    
    
    //just accessing a key creates new entry in a map
//    map<string, int> mapping;
//    printMap(mapping);
//    mapping["hello"];
//    printMap(mapping);
//    mapping["world"];
//    printMap(mapping);
    
    
    //group strings from an array by first character
    vector<string> words = { "one", "two", "three", "four" };
    map<char, vector<string>> groups;
    for (const string& s : words) {
        groups[s[0]].push_back(s);
    }
    for (auto pair : groups) {
        cout << pair.first << ": ";
        for (string& s : pair.second) {
            cout << s << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
