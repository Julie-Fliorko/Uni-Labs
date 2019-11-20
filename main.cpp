// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "bank.h"
using namespace std;


int main()
{
	
	Bank a("Alpha","hhhhhh",12,23,34,55, 12);
	a.getName();
	a.getFamilyName();
	a.getNumOfKIds();
	a.getNumOfCredits();
	a.getNumOfFamilyMembers();
	a.getNumOfClients();
	a.getSelery();

	cout << endl;


	Bank b("Beta","jjj",22,14,12,2, 7);

	b.getName();
	b.getNumOfKIds();
	b.getNumOfCredits();
	b.getNumOfCredits();
	b.getNumOfFamilyMembers();
	b.getNumOfClients();
	b.getSelery();
	cout << endl;


	Bank c("Charlie","kkkk", 13, 2, 44, 5, 8);

	c.getName();
	c.getNumOfKIds();
	c.getNumOfCredits();
	c.getNumOfCredits();
	c.getNumOfFamilyMembers();
	c.getNumOfClients();
	c.getSelery();
	cout << endl;

}