/*
* Programmer: Konstantin Shvedov
* Class: CptS 122
* Programming Assignment: PA5
* Date: 20/10/2017
* Description: This is where all the prototypes for functions for Diet Plan are
*/

#ifndef DIETPLAN_H
#define DIETPLAN_H

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

class DietPlan
{
public:
	DietPlan(int newGoal = 0, string newName = "Unknown", string newDate = "00/00/0000");
	DietPlan(DietPlan &newDietPlan);
	~DietPlan();

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

ostream &operator << (ostream &lhs, DietPlan &rhs);
ofstream &operator << (ofstream &lhs, DietPlan &rhs);
ifstream &operator >> (ifstream &lhs, DietPlan &rhs);


#endif