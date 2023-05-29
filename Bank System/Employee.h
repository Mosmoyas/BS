#pragma once
#include "Person.h"

class Employee {
private:
    double salary;
    Person person;

public:
    Employee();
    Employee(double salary,  Person& person);
    ~Employee();

    double getSalary() ;
    void setSalary(double salary);

     Person& getPerson() ;
    void setPerson( Person& person);

    void display();
    
    void Login(string id,string password){
    
            
    }
};

