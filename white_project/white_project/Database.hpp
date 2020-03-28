//
//  Database.hpp
//  white_project
//
//  Created by Artsiom Kaliaha on 2/10/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#ifndef Database_hpp
#define Database_hpp

#include <iostream>
#include <sstream>
#include <fstream>

#include <map>
#include <vector>

#include <string>
#include <iomanip>
#include <algorithm>

#include "Date.hpp"

using namespace std;

class Database {
private:
    map<Date, vector<string>, DateCompare> data;
    string path;
    ifstream dbStream;
    
    void parseDbEntry(Date& date, string& entry, const string& input, bool onlyDate) const;
    
    void addEntry(Date& date, string& entry);
    
    void checkNextCharacter(stringstream& stream, char next) const;
    
public:
    Database(const string& path);
    
    void connect();
    
    void disconnect() const;
    
    void add(const string& input);
    
    void del(const string& input);
    
    void delAll(const string& input);
    
    void find(const string& input) const;
    
    void print() const;
};

#endif /* Database_hpp */
