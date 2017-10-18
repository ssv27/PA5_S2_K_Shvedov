#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::ofstream;
using std::fstream;
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

	void editGoal(DietPlan &plan);
private:
	int goal;
	string name;
	string date;
};

ostream &operator << (ostream &lhs, DietPlan &rhs);
ofstream &operator << (ofstream &lhs, DietPlan &rhs);
fstream &operator >> (fstream &lhs, DietPlan &rhs);


#endif