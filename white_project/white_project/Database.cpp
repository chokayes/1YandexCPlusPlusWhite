//
//  Database.cpp
//  white_project
//
//  Created by Artsiom Kaliaha on 2/10/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include "Database.hpp"

Database::Database(const string& path) : path(path) { }

void Database::connect() {
    ifstream database(path);
    
    if (!database.is_open()) {
        return;
    }
    
    string dbEntry;
    while (getline(database, dbEntry)) {
        Date date;
        string entry;
        
        try {
            parseDbEntry(date, entry, dbEntry, false);
            addEntry(date, entry);
        } catch (exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
}

void Database::disconnect() const {
    ofstream database(path);
    
    if (!database.is_open()) {
        throw runtime_error("Database can't be open");
    }
    
    for (auto& pair : data) {
        for (auto& entry : pair.second) {
            database << pair.first << "|" << entry << endl;
        }
    }
}

void Database::add(const string& input) {
    Date date;
    string entry;
    parseDbEntry(date, entry, input, false);
    
    vector<string>& v = data[date];
    if (count(begin(v), end(v), entry) == 0) {
        v.push_back(entry);
    }
}

void Database::del(const string& input) {
    Date date;
    string entry;
    parseDbEntry(date, entry, input, false);
    
    if (data.count(date) == 0) {
        cout << "event not found" << endl;
        return;
    }
    
    vector<string>& v = data[date];
    auto sizeBefore = v.size();
    v.erase(remove(begin(v), end(v), entry), end(v));
    
    if (sizeBefore - 1 == v.size()) {
        cout << "deleted successfully" << endl;
    } else {
        cout << "event not found" << endl;
    }
}

void Database::delAll(const string& input) {
    Date date;
    string entry;
    parseDbEntry(date, entry, input, true);
    
    if (data.count(date) == 0) {
        cout << "deleted 0 events" << endl;
        return;
    }
    
    vector<string>& v = data[date];
    auto count = v.size();
    data.erase(date);
    
    cout << "deleted " << count << " events" << endl;
}

void Database::find(const string& input) const {
    Date date;
    string entry;
    parseDbEntry(date, entry, input, true);
    
    if (data.count(date) == 0) {
        cout << "no entries for given date" << endl;
        return;
    }
    
    vector<string> v = data.at(date);
    sort(begin(v), end(v));
    for (auto& item : v) {
        cout << item << endl;
    }
}

void Database::print() const {
    for (auto& pair : data) {
        

        for (auto& item : pair.second) {
            cout << pair.first << "|" << item << endl;
        }
        
        cout << endl;
    }
}

void Database::parseDbEntry(Date& date, string& entry, const string& input, bool onlyDate) const {
    stringstream entryStream(input);
    
    entryStream >> date.day;
    checkNextCharacter(entryStream, '-');
    entryStream >> date.month;
    checkNextCharacter(entryStream, '-');
    entryStream >> date.year;
    
    if (onlyDate) {
        return;
    }
    
    checkNextCharacter(entryStream, '|');
    entryStream >> entry;
}

void Database::addEntry(Date& date, string& entry) {
    vector<string>& v = data[date];
    if (count(begin(v), end(v), entry) == 0) {
        v.push_back(entry);
    }
}

void Database::checkNextCharacter(stringstream& stream, char next) const {
    char nextChar = stream.peek();
    if (nextChar != next) {
        stringstream errorStream;
        errorStream << "expected " << next << " character in input" << endl;
        
        throw runtime_error(errorStream.str());
    }
    stream.ignore(1);
}
