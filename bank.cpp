#include "bank.h"
#include <iostream>
using namespace std;


void Bank::setName()
{
	cout << "type name:";
	cin >> name;

}

void Bank::setNumOfClientd()
{
	cout << "type number of clients:";
	cin >> NumOfClients;
}

void Bank::setNumOfCredits()
{
	cout << "type how much credits does client have: ";
	cin >> NumOfCredits;
}

void Bank::setsalary()
{
	cout << "type client's salary:";
	cin >> salary;
}

void Bank::setNumOfFamilyMembers()
{
	cout << "type number of client's family members:";
	cin >> NumOfFamilyMembers;
}

void Bank::getName()
{ 
	cout << "Client's name" << endl;
	cout << this->name << endl;
}

void Bank::getNumOfClients()
{
	cout << "Number of clients" << endl;
	cout << this->NumOfClients << endl;
}

void Bank::getNumOfCredits()
{
	cout << "Number of credits" << endl;
	cout << this->NumOfCredits << endl;
}

void Bank::getSelery()
{
	cout << "salary" << endl;
	cout << this->salary << endl;
}

void Bank::getNumOfFamilyMembers()
{
	cout << "Number of famaly members" << endl;
	cout << this->NumOfFamilyMembers<< endl;
}

void Bank::setFamilyName()
{
	cout << " type family name" << endl;
	cin >> familyName;

}

void Bank::getFamilyName()
{
	cout << "FAmily Name is:" << endl;
	cout << this->familyName<< endl;
}

void Bank::setNumOfKids()
{
	cout << " type num of kids" << endl;
	cin >> numOfKids;

}

void Bank::getNumOfKIds()
{
	cout << "num of kids id:" << endl;
	cout << this->numOfKids << endl;
}


Bank::Bank(string name, string FamilyName, int numOfClients, int numOfCredits, int salary, int numOfFamilyMembers, int NumOfKIds)
{
	this->name = name;
	this->familyName = FamilyName;
	this->NumOfClients = numOfClients;
	this->NumOfCredits = numOfCredits;
	this->salary = salary;
	this->NumOfFamilyMembers = numOfFamilyMembers;
	this->numOfKids = NumOfKIds;
}

Bank::~Bank()
{
}
