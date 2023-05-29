#include "Person.h"
#include <cctype>





Person::Person()
{
}

Person::Person(string id, string name, string password)
{
    setId(id);
    setName(name);
    setPassword(password);
}


Person::~Person()
{
}


// Setter methods

void Person::setId(string id) {
        this->id = id;
}


//void Person::setName(string name) {
//   
//   /* bool isAlpha = true;
//    for (char c : name) {
//        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ||  c == ' ') {
//            isAlpha = false;
//            break;
//        }
//    }
//    {
//        if (isAlpha && name.size() >= 5 && name.size() <= 20)
//            this->name = name;
//
//    }*/
//}

void Person::setName( string name) {
    bool isAlpha = true;
    for (char c : name) {
        if (!isalpha(c) && c != ' ') {
            isAlpha = false;
            break;
        }
    }

    if (isAlpha && name.size() >= 5 && name.size() <= 20) {
        this->name = name;
    }
}

void Person::setPassword(string password) {
    if (password.size() >= 8 && password.size() <= 20)

    this->password = password;
}

// Getter methods

string Person::getId()  {
    return  this->id;
}


string Person:: getName()  {
    return this->name;
}

string Person::getPassword()  {
    return this->password;
}





