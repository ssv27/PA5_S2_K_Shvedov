#include "DietPlan.h"
/*
* Programmer: Konstantin Shvedov
* Class: CptS 122
* Programming Assignment: PA5
* Date: 02/10/2017
* Description: This is where all the functions for Diet plan class are;
*/

/*
Function: DietPlan::DietPlan(int newGoal, std::string newName, std::string newDate)
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Constructor for diet plan class
Input parameters : int newGoal, std::string newName, std::string newDate
Returns : none
Precondition : Call function
Postconditions : None
*/
DietPlan::DietPlan(int newGoal, string newName, string newDate)
{
	this->mGoal = newGoal;
	this->mName = newName;
	this->mDate = newDate;
}

/*
Function: DietPlan(DietPlan &newDietPlan)
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Copy Constructor for diet plan class
Input parameters : DietPlan &newDietPlan
Returns : none
Precondition : Call function
Postconditions : None
*/
DietPlan::DietPlan(DietPlan &newDietPlan)
{
	mGoal = newDietPlan.mGoal;
	mName = newDietPlan.mName;
	mDate = newDietPlan.mDate;
}

/*
Function: DietPlan::~DietPlan()
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Destructor for diet plan class
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
DietPlan::~DietPlan()
{
	//cout << "Inside of DietPlan destructor!" << endl;
}

int DietPlan::getGoal() const
{
	return mGoal;
}

string DietPlan::getName() const
{
	return mName;
}

string DietPlan::getDate() const
{
	return mDate;
}

void DietPlan::setGoal(int newGoal)
{
	mGoal = newGoal;
}

void DietPlan::setName(string newName)
{
	mName = newName;
}

void DietPlan::setDate(string newDate)
{
	mDate = newDate;
}

void DietPlan::editGoal()
{
	int newGoal;
	cout << "Please input new calorie Goal: ";
	cin >> newGoal;
	this->setGoal(newGoal);
	cout << endl;
}

void DietPlan::editName()
{
	string newName;
	cout << "Please input new Name (no spaces): ";
	cin >> newName;
	this->setName(newName);
	cout << endl;
}

void DietPlan::editDate()
{
	string newDate;
	cout << "Please input new Date (mm/dd/yyyy format): ";
	cin >> newDate;
	this->setDate(newDate);
	cout << endl;
}

void DietPlan::editPlan()
{
	this->editName();
	this->editGoal();
	this->editDate();
}

ostream & operator << (ostream &lhs, DietPlan &rhs)
{
	lhs << "Plan Name: " << rhs.getName() << "\n";
	lhs << "Calorie Goal: " << rhs.getGoal() << "\n";
	lhs << "Plan Date: " << rhs.getDate() << "\n\n";
	return lhs;
}

ofstream & operator << (ofstream &lhs, DietPlan &rhs)
{
	lhs << rhs.getName() << "\n";
	lhs << rhs.getGoal() << "\n";
	lhs << rhs.getDate() << "\n\n";
	return lhs;
}

ifstream & operator >> (ifstream &lhs, DietPlan &rhs)
{
	int goal = 0;
	string name = "", date = "";

	lhs >> name;
	rhs.setName(name);
	lhs >> goal;
	rhs.setGoal(goal);
	lhs >> date;
	rhs.setDate(date);

	return lhs;
}

