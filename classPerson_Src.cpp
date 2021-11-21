#include <iostream>
#include <string>
#include <vector>

#include "classPerson.hpp"

int Person::_peopleCount = 0;

using namespace std;

Person::Person():_name("unknown"), _surname("unknown"), _age(-1){

    _peopleCount++;
}

Person::Person(const string &n):_name(n), _surname("unknown"), _age(-1){

    _peopleCount++;
}

Person::Person(const int &a):_name("unknown"), _surname("unknown"), _age(a){

    _peopleCount++;
}

Person::Person(const string &n, const int &a):_name(n), _surname("unknown"), _age(a){

    _peopleCount++;
}

Person::Person(const string &n, const string &sn):_name(n), _surname(sn), _age(-1){

    _peopleCount++;
}

Person::Person(const string &n, const string &sn, const int &a):_name(n), _surname(sn), _age(a){

    _peopleCount++;
}

const string Person::getName()  const{

    return _name;
}

const string Person::getSurname()  const{

    return _surname;
}

const int Person::getAge()  const{

    return _age;
}

void Person::setName(const string &n){

    _name = n;
}

void Person::setSurname(const string &sn){

    _name = sn;
}

void Person::setAge(const int &a){

    _age = a;
}

ostream& operator<<(ostream &out, const Person &p){

    out << p.getName() << endl;
    out << p.getSurname() << endl;
    out << p.getAge() << endl;

    return out;
}

void Person::output(){

    cout << _name << endl;
    cout << _surname << endl;
    cout << _age << endl;
}

int Person::operator+(const Person &other){

    return _age + other.getAge();
}

int Person::getPeopleCount(){

    return _peopleCount;
}
