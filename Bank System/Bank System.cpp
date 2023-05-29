// Bank System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"

using namespace std;
int main()
{
	/*Client client;
	client.setBalance(3000);
	client.setId("525-ASR");
	client.setName("Shady Kamel");
	Client client2;
	client2.setBalance(5000);
	client2.setId("425-ASD");
	client2.setName("Waeli");
	cout << char(32) << endl;
	cout << "CL: " << client.checkBalance()<<endl;
	client.deposit(0);
	cout << "CL: " << client.checkBalance() << endl;;
	client.withdraw(100);
	cout << "CL: " << client.checkBalance() << endl;
	client.transferTo(5500, client2);
	cout << "CL: " << client.checkBalance() << endl;
	cout << "CL2: " << client2.checkBalance() << endl;
	client.withdraw(100);
	client2.withdraw(100);
	cout << "CL2: " << client2.checkBalance() << endl;
	cout << "===========================================\n";
	client.display();
	cout << "===========================================\n";
	client2.display();*/

	Person per1("545-ASD", "Sameha Radi", "5785415");
	Employee emp1(5450,per1);


	emp1.display();









}
