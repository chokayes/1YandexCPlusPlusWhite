//
//  main.cpp
//  white_project
//
//  Created by Artsiom Kaliaha on 2/10/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

#include "Database.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Database db("database.txt");
    db.connect();
    
    char command = ' ';
    string line;

    while (command != 'q') {
        cout << endl << "enter command" << endl;
        cin >> command;

        switch (command) {
            case 'w':
                cout << "entry to write:" << endl;
                cin >> line;
                db.add(line);
                break;
            case 'd':
                cout << "entry to delete:" << endl;
                cin >> line;
                db.del(line);
                break;
            case 'a':
                cout << "entry date to delete all:" << endl;
                cin >> line;
                db.delAll(line);
                break;
            case 'p':
                db.print();
                break;
            case 'f':
                cout << "entry to find:" << endl;
                cin >> line;
                db.find(line);
                break;
            case 'q':
                cout << "buy!" << endl;
                break;
        }
    }
    
    db.disconnect();
    
    return 0;
}
