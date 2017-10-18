#ifndef EXERCISE_H
#define EXCERCISE_H

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

	void editGoal(ExercisePlan &plan);
private:
	int goal;
	string name;
	string date;
};


ostream &operator << (ostream &lhs, ExercisePlan &rhs);
ofstream &operator << (ofstream &lhs, ExercisePlan &rhs);
fstream &operator >> (fstream &lhs, ExercisePlan &rhs);


#endif