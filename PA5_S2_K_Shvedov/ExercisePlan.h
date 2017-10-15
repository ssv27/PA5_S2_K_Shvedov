#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class ExercisePlan
{
public:
	ExercisePlan(int newGoal, std::string newName, std::string newDate);
	~ExercisePlan();

	//getters and setters
	int getGoal() const;
	std::string getName() const;
	std::string getDate() const;
	void setGoal(int newGoal);
	void setName(std::string newName);
	void setDate(std::string newDate);

private:
	int goal;
	std::string name;
	std::string date;
};




#endif
