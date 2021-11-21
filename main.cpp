#include <iostream>
#include <string>
#include <vector>

#include "classPerson.hpp"

using namespace std;

int main(){

    class Person p1("onur", "bilgin", 21);
    class Person p2("atacan", 19);
    cout << p1 + p2 << endl;

    return 0;
}