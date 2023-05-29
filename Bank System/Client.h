#pragma once
#include "Person.h"

class Client
{
private:
	double balance;
	Person person;


public:
	// Constructors
	//Default
	Client();
	//Parameterized
	Client(double balance, Person person);

	//Setter Methods
	void setBalance(double balance);
	void setPerson(Person person);
	//Getter Methods
	double checkBalance();
	Person getPerson();
	


	//Methods
	void deposit(double amount);
	void withdraw(double amount);
	void transferTo(double amount, Client& recipient);
	void display();



	


};

