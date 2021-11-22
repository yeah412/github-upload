#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{

    public:
        // constructor
        Person();
        explicit Person(const string &n);
        explicit Person(const int &a);
        Person(const string &n, const int &a);
        Person(const string &n, const string &sn);
        Person(const string &n, const string &sn, const int &a);
        // getters
        const string getName()  const;
        const string getSurname()   const;
        const int getAge()  const;
        static int getPeopleCount();
        // setters
        void setName(const string &n);
        void setSurname(const string &sn);
        void setAge(const int &a);
        // overloads
        friend ostream& operator<<(ostream &out, const Person &p);
        int operator+(const Person &other);
        // public member functions
        void output();

    private:
        // variables
        string _name;
        string _surname;
        int _age;
        static int _peopleCount;

};


// first staging: classPerson.hpp and classPerson.cpp