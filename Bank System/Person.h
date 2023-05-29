#pragma once
#include <string>

using namespace std;

class Person {
//Protected:
    string id;
    string name;
    string password;

public:

    // Constructors
    //Default
    Person();
    //Parameterized
    Person(string id, string name, string password);

   

    // Destructor
    ~Person();

    // Setter methods
    void setId(string id);

    void setName(string name);

    void setPassword(string password);

    // Getter methods
    string getId() ;

    string getName();

    string getPassword();
};

