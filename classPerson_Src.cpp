#include <iostream>
#include <string>
#include <vector>

#include "classPerson.hpp"

using namespace std;

Person::Person():_name("unknown"), _surname("unknown"), _age(-1){}

Person::Person(const string &n):_name(n), _surname("unknown"), _age(-1){}

Person::Person(const int &a):_name("unknown"), _surname("unknown"), _age(a){}

Person::Person(const string &n, const string &sn):_name(n), _surname(sn), _age(-1){}

Person::Person(const string &n, const string &sn, const int &a):_name(n), _surname(sn), _age(a){}

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