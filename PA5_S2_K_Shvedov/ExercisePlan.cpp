#include "ExercisePlan.h"
/*
* Programmer: Konstantin Shvedov
* Class: CptS 122
* Programming Assignment: PA5
* Date: 02/10/2017
* Description: This is where all the functions for Exercise plan class are;
*/

/*
Function: ExercisePlan::ExercisePlan(int newGoal, std::string newName, std::string newDate)
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Constructor for Exercise plan class
Input parameters : int newGoal, std::string newName, std::string newDate
Returns : none
Precondition : Call function
Postconditions : None
*/
ExercisePlan::ExercisePlan(int newGoal, string newName, string newDate)
{
	this->mGoal = newGoal;
	this->mName = newName;
	this->mDate = newDate;
}

/*
Function: ExercisePlan(ExercisePlan &newExercisePlan)
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Copy Constructor for Exercise plan class
Input parameters : ExercisePlan &newExercisePlan
Returns : none
Precondition : Call function
Postconditions : None
*/
ExercisePlan::ExercisePlan(ExercisePlan &newExercisePlan)
{
	mGoal = newExercisePlan.mGoal;
	mName = newExercisePlan.mName;
	mDate = newExercisePlan.mDate;
}

/*
Function: ExercisePlan::~ExercisePlan()
Date Created : 08 / 10 / 2017
Date Last Modified : 08 / 10 / 2017
Description : Destructor for Exercise plan class
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
ExercisePlan::~ExercisePlan()
{
	//cout << "Inside of ExercisePlan destructor!" << endl;
}

/*
Function: int ExercisePlan::getGoal() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets goal
Input parameters : none
Returns : goal
Precondition : Call function
Postconditions : None
*/
int ExercisePlan::getGoal() const
{
	return mGoal;
}

/*
Function: int ExercisePlan::getName() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets Name
Input parameters : none
Returns : name
Precondition : Call function
Postconditions : None
*/
string ExercisePlan::getName() const
{
	return mName;
}

/*
Function: int ExercisePlan::getDate() const
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : gets date
Input parameters : none
Returns : date
Precondition : Call function
Postconditions : None
*/
string ExercisePlan::getDate() const
{
	return mDate;
}

/*
Function: void ExercisePlan::setGoal(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets goal
Input parameters : newGoal
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::setGoal(int newGoal)
{
	this->mGoal = newGoal;
}

/*
Function: void ExercisePlan::setName(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets name
Input parameters : string newName
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::setName(string newName)
{
	this->mName = newName;
}

/*
Function: void ExercisePlan::setDate(int newGoal)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : sets Date
Input parameters : string newDate
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::setDate(string newDate)
{
	this->mDate = newDate;
}

/*
Function: void ExercisePlan::editGoal()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits goal
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::editGoal()
{
	int newGoal;
	cout << "Please input new steps Goal: ";
	cin >> newGoal;
	this->setGoal(newGoal);
	cout << endl;
}

/*
Function: void ExercisePlan::editName()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits name
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::editName()
{
	string newName;
	cout << "Please input new Name: ";
	cin >> newName;
	this->setName(newName);
	cout << endl;
}

/*
Function: void ExercisePlan::editDate()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : edits date
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::editDate()
{
	string newDate;
	cout << "Please input new Date: ";
	cin >> newDate;
	this->setDate(newDate);
	cout << endl;
}

/*
Function: void ExercisePlan::editPlan()
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : function in charge of calling all edits for a plan
Input parameters : none
Returns : none
Precondition : Call function
Postconditions : None
*/
void ExercisePlan::editPlan()
{
	this->editName();
	this->editGoal();
	this->editDate();
}

/*
Function: ostream & operator << (ostream &lhs, ExercisePlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to print a plan to screen
Input parameters : ostream &lhs, ExercisePlan &rhs
Returns : ostream
Precondition : Call function
Postconditions : None
*/
ostream & operator << (ostream &lhs, ExercisePlan &rhs)
{
	lhs << "Plan Name: " << rhs.getName() << "\n";
	lhs << "Calorie Goal: " << rhs.getGoal() << "\n";
	lhs << "Plan Date: " << rhs.getDate() << "\n\n";
	return lhs;
}

/*
ofstream & operator << (ofstream &lhs, ExercisePlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to print a plan to file
Input parameters : oftream &lhs, ExercisePlan &rhs
Returns : ofstream
Precondition : Call function
Postconditions : None
*/
ofstream & operator << (ofstream &lhs, ExercisePlan &rhs)
{
	lhs << rhs.getName() << "\n";
	lhs << rhs.getGoal() << "\n";
	lhs << rhs.getDate() << "\n\n";
	return lhs;
}

/*
ifstream & operator >> (ifstream &lhs, ExercisePlan &rhs)
Date Created : 08 / 10 / 2017
Date Last Modified : 20 / 10 / 2017
Description : Overloads an operator to read plan from file
Input parameters : iftream &lhs, ExercisePlan &rhs
Returns : ifstream
Precondition : Call function
Postconditions : None
*/
ifstream & operator >> (ifstream &lhs, ExercisePlan &rhs)
{
	int goal = 0;
	string name, date;

	lhs >> name;
	rhs.setName(name);
	lhs >> goal;
	rhs.setGoal(goal);
	lhs >> date;
	rhs.setDate(date);

	return lhs;
}

