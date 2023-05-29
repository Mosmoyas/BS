#include "Person.h"
#include "Client.h"
#include <iostream>
using namespace std;



Client::Client():balance(0.0), person(){}


Client::Client(double balance, Person person)
{
	this->balance = balance;
	this->person = person;
}


void Client::setBalance(double balance) {
	if (balance < 1500) {
		cout << "\nStart Balance must be at least 1500 ! " << endl;

	}
	else
		this->balance = balance;
}


//void Client::setId(string id)
//{
//		this->person.setId(id);
//}
//
//
//void Client::setName(string  name)
//{
//	
//	this->person.setName(name);
//		
//}
//
//
//void Client::setPassword(string  password)
//{
//	this->person.setPassword(password);
//}


Person Client::getPerson()
{
	return person;
}

void Client::setPerson(Person person)
{
	this->person = person;
}

double Client::checkBalance() {
	if(balance<0) 
		return 0;
	else
		return this->balance;
}


//string Client::getId()
//{
//	return this->person.getId();
//}
//
//
//string Client::getName()
//{
//	return this->person.getName();
//}
//
//string Client::getPassword()
//{
//	return this->person.getPassword();
//}


void  Client::deposit(double newAmount){
	if (newAmount <= 0.0) {
		cout << "\nInvalid Deposit.\n";
		return;
	}
	else {
		balance = checkBalance() + newAmount;
		cout << "Deposited $" << newAmount << " successfully.\n";
	}
	
		

}

void Client::withdraw(double amount)
{
	if (checkBalance() <= 1500) {
		cout << "\nInsufficient balance.\n";

		return;
	}
	else {
		balance = balance - amount;
	}
}

void Client::transferTo(double amount, Client& recipient) {

	recipient.deposit(amount);
	balance = balance - amount;
	cout << "Transferred $" << amount << " to " << recipient.person.getName() << " successfully.\n";

}

void Client::display()
{
	cout << "Client ID: " << person.getId() << endl;
	cout << "Client Name: " << person.getName() << endl;
	cout << "Balance: " << checkBalance() << endl;


}

















