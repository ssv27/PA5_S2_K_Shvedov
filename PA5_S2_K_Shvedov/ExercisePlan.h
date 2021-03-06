/*
* Programmer: Konstantin Shvedov
* Class: CptS 122
* Programming Assignment: PA5
* Date: 20/10/2017
* Description: This is where all the prototypes for functions for Exercise Plan are
*/
#ifndef EXERCISEPLAN_H
#define EXERCISEPLAN_H

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::ofstream;
using std::ifstream;
using std::string;

class ExercisePlan
{
public:
	ExercisePlan(int newGoal = 0, string newName = "Unknown", string newDate = "00/00/0000");
	ExercisePlan(ExercisePlan &newExercisePlan);
	~ExercisePlan();

	//getters and setters
	int getGoal() const;
	string getName() const;
	string getDate() const;

	void setGoal(int newGoal);
	void setName(string newName);
	void setDate(string newDate);

	void editGoal();
	void editName();
	void editDate();

	void editPlan();
private:
	int mGoal;
	string mName;
	string mDate;
};


ostream &operator << (ostream &lhs, ExercisePlan &rhs);
ofstream &operator << (ofstream &lhs, ExercisePlan &rhs);
ifstream &operator >> (ifstream &lhs, ExercisePlan &rhs);


#endif