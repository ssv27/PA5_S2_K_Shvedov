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
	this->goal = newGoal;
	this->name = newName;
	this->date = newDate;
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
	goal = newExercisePlan.goal;
	name = newExercisePlan.name;
	date = newExercisePlan.date;
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
	cout << "Inside of ExercisePlan destructor!" << endl;
}

int ExercisePlan::getGoal() const
{
	return goal;
}

string ExercisePlan::getName() const
{
	return name;
}

string ExercisePlan::getDate() const
{
	return date;
}

void ExercisePlan::setGoal(int newGoal)
{
	this->goal = newGoal;
}

void ExercisePlan::setName(string newName)
{
	this->name = newName;
}

void ExercisePlan::setDate(string newDate)
{
	this->date = newDate;
}

void ExercisePlan::editGoal(ExercisePlan &plan)
{
	int newGoal;
	cout << "Please input new steps goal: ";
	cin >> newGoal;
	while (!cin)
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Sorry that is not a numericle input, please input valid value: ";
		cin >> newGoal;
	}
	plan.setGoal(newGoal);
	cout << plan;
}


ostream & operator << (ostream &lhs, ExercisePlan &rhs)
{
	lhs << "Plan Name: " << rhs.getName << "\n";
	lhs << "Calorie Goal: " << rhs.getGoal << "\n";
	lhs << "Plan Date: " << rhs.getDate << "\n";
}

ofstream & operator << (ofstream &lhs, ExercisePlan &rhs)
{
	lhs << rhs.getName << "\n";
	lhs << rhs.getGoal << "\n";
	lhs << rhs.getDate << "\n\n";
}

fstream & operator >> (fstream &lhs, ExercisePlan &rhs)
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

