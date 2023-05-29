#include "Employee.h"
#include<iostream>

using namespace std;
Employee::Employee() : salary(0.0), person() {
}

Employee::Employee(double salary,  Person& person) : salary(salary), person(person) {
}

Employee::~Employee() {
}

double Employee::getSalary()  {
    return salary;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}

 Person& Employee::getPerson()  {
    return person;
}

void Employee::setPerson( Person& person) {
    this->person = person;
}

void Employee::display()
{
    cout << "ID: " << person.getId() << endl;
    cout << "Name: " << person.getName() << endl;
    cout << "Salary: " << getSalary() << endl;


}







