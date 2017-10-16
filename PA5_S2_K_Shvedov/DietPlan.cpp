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
	this->goal = newGoal;
	this->name = newName;
	this->date = newDate;
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
	goal = newDietPlan.goal;
	name = newDietPlan.name;
	date = newDietPlan.date;
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
	cout << "Inside of DietPlan destructor!" << endl;
}

int DietPlan::getGoal() const
{
	return goal;
}

string DietPlan::getName() const
{
	return name;
}

string DietPlan::getDate() const
{
	return date;
}

void DietPlan::setGoal(int newGoal)
{
	this->goal = newGoal;
}

void DietPlan::setName(string newName)
{
	this->name = newName;
}

void DietPlan::setDate(string newDate)
{
	this->date = newDate;
}

void DietPlan::editGoal(int newGoal)
{
	cout << "Please input new calorie goal: ";
	cin >> newGoal;
	setGoal(newGoal);
	
}


ostream & operator << (ostream &lhs, DietPlan &rhs)
{
	lhs << "Plan Name: " << rhs.getName << "\n";
	lhs << "Calorie Goal: " << rhs.getGoal << "\n";
	lhs << "Plan Date: " << rhs.getDate << "\n";
}

fstream & operator << (fstream &lhs, DietPlan &rhs)
{
	lhs << rhs.getName << "\n";
	lhs << rhs.getGoal << "\n";
	lhs << rhs.getDate << "\n\n";
}

istream & operator >> (istream &lhs, DietPlan &rhs)
{
	int goal = 0;
	string name = "", date = "";

	lhs >> goal;
	rhs.setGoal(goal);
	lhs >> name;
	rhs.setName(name);
	lhs >> date;
	rhs.setDate(date);
}

