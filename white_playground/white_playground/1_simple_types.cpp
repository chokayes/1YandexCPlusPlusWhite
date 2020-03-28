//
//  main.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/4/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

struct Person {
    string name;
    string surname;
    int age;
};

int main1(int argc, const char * argv[]) {
    vector<int> items = { 1, 2, 3, 4 };
    cout << items.size() << endl;
    
    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;
    cout << name_to_value["two"] << endl;
    
    vector<Person> staff;
    staff.push_back({ "Elon", "Musk", 50 });
    staff.push_back({ "Steve", "Jobs", 60 });
    
    cout << staff[0].name << " " << staff[0].surname << " " << staff[0].age << endl;
    
    return 0;
}
