//
//  14_class.cpp
//  white_playground
//
//  Created by Artsiom Kaliaha on 2/7/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() : name("UNKNOWN"), age(-1) {
        cout << "CALLED" << endl;
    }
    
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
    ~Person() {
        cout << "bye!" << endl;
    }
    
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    
    void setName(string name) {
        this->name = name;
    }
    
    void setAge(int age) {
        this->age = age;
    }
};

void tryChangePerson(const Person& p) {
    //p.setName("hello"); //call isn't allowed, since p is a const reference
    //cout << p.getName() << endl; // allowed, since getName() doesn't change p
}

void printPerson(const Person& p) {
    cout << p.getName() << " - " << p.getAge() << endl;
}

Person getNewPerson(bool isLucas) {
    if (isLucas) {
        return { "Lukas", 22 };
    }
    return { };
}

vector<int> getNumbers(bool isEmpty) {
    if (isEmpty) {
        return { };
    }
    return { 1, 2, 3, 4, 5 };
}

template<typename T>
void printVector(const vector<T>& v) {
    cout << "vector length " << v.size() << endl;
    for (auto item : v) {
        cout << item << ", ";
    }
    cout << endl;
}

int main14() {
    Person p;
    p.setName("John");
    p.setAge(25);
    tryChangePerson(p);
    printPerson(p);
    
    Person p1("Mike", 12);
    printPerson(p1);
    
    //CALLING A DEFAULT CONSTRUCTOR???
    Person p2;
    printPerson(p2);
    
    Person p3;
    printPerson(p3);
    
    //short calls
    cout << endl << "strange parameters" << endl;
    printPerson({ });
    printPerson({ "Simon", 28 });
    printPerson(Person("Tom", 30));
    cout << endl << "strange return values" << endl;
    printPerson(getNewPerson(true));
    printPerson(getNewPerson(false));
    
    cout << endl << "Test numbers" << endl;
    printVector(getNumbers(true));
    printVector(getNumbers(false));
    
    return 0;
}
