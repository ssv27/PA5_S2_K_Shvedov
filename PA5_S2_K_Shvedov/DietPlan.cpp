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

/*
Function: int DietPlan::getGoal() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets goal
Input parameters : none
Returns : goal
Precondition : Call function
Postconditions : None
*/
int DietPlan::getGoal() const
{
	return mGoal;
}

/*
Function: int DietPlan::getName() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets Name
Input parameters : none
Returns : name
Precondition : Call function
Postconditions : None
*/
string DietPlan::getName() const
{
	return mName;
}

/*
Function: int DietPlan::getDate() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets date
Input parameters : none
Returns : date
Precondition : Call function
Postconditions : None
*/
string DietPlan::getDate() const
{
	return mDate;
}

/*
Function: void DietPlan::setGoal(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets goal
Input parameters : newGoal
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::setGoal(int newGoal)
{
	this->mGoal = newGoal;
}

/*
Function: void DietPlan::setName(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets name
Input parameters : string newName
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::setName(string newName)
{
	this->mName = newName;
}

/*
Function: void DietPlan::setDate(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets Date
Input parameters : string newDate
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::setDate(string newDate)
{
	this->mDate = newDate;
}

/*
Function: void DietPlan::editGoal()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits goal
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::editGoal()
{
	int newGoal;
	cout << "Please input new calorie Goal: ";
	cin >> newGoal;
	this->setGoal(newGoal);
	cout << endl;
}

/*
Function: void DietPlan::editName()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits name
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::editName()
{
	string newName;
	cout << "Please input new Name (no spaces): ";
	cin >> newName;
	this->setName(newName);
	cout << endl;
}

/*
Function: void DietPlan::editDate()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits date
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::editDate()
{
	string newDate;
	cout << "Please input new Date (mm/dd/yyyy format): ";
	cin >> newDate;
	this->setDate(newDate);
	cout << endl;
}

/*
Function: void DietPlan::editPlan()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : function in charge of calling all edits for a plan
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void DietPlan::editPlan()
{
	this->editName();
	this->editGoal();
	this->editDate();
}

/*
Function: ostream & operator << (ostream &lhs, DietPlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to print a plan to screen
Input parameters : ostream &lhs, DietPlan &rhs
Returns : ostream
Precondition : Call function
Postconditions : None
*/
ostream & operator << (ostream &lhs, DietPlan &rhs)
{
	lhs << "Plan Name: " << rhs.getName() << "\n";
	lhs << "Calorie Goal: " << rhs.getGoal() << "\n";
	lhs << "Plan Date: " << rhs.getDate() << "\n\n";
	return lhs;
}

/*
ofstream & operator << (ofstream &lhs, DietPlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to print a plan to file
Input parameters : oftream &lhs, DietPlan &rhs
Returns : ofstream
Precondition : Call function
Postconditions : None
*/
ofstream & operator << (ofstream &lhs, DietPlan &rhs)
{
	lhs << rhs.getName() << "\n";
	lhs << rhs.getGoal() << "\n";
	lhs << rhs.getDate() << "\n\n";
	return lhs;
}

/*
ifstream & operator >> (ifstream &lhs, DietPlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to read plan from file
Input parameters : iftream &lhs, DietPlan &rhs
Returns : ifstream
Precondition : Call function
Postconditions : None
*/
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

