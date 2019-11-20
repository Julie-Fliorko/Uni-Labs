#pragma once
// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Bank
{

private:
	string name;
	int NumOfClients;
	int NumOfCredits;

protected:
	int salary;
	int NumOfFamilyMembers;

public:
	string  familyName;
	int numOfKids;
	void setName();

	void setNumOfClientd();
	void setNumOfCredits();
	void setsalary();
	void setNumOfFamilyMembers();
	void getName();
	void getNumOfClients();
	void getNumOfCredits();
	void getSelery();
	void getNumOfFamilyMembers();
	void setFamilyName();
	void getFamilyName();
	void setNumOfKids();
	void getNumOfKIds();
	Bank(string name, int numOfClients, int numOfCredits, int salary, int numOfFamilyMembers, string FamilyName, int NumOfKIds, string familyName, int numOfKids);
	//consturctors 2
	//Bank();


	Bank(string name, string FamilyName, int numOfClients, int numOfCredits, int salary, int numOfFamilyMembers, int NumOfKIds);

	virtual ~Bank();


};

