#ifndef FITNESSAPPWRAPPER_H
#define FITNESSAPPWRAPPER_H

#include <iostream>
#include <string>

#include "ExercisePlan.h"
#include "DietPlan.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::fstream;
using std::ifstream;
using std::string;

class FitnessAppWrapper
{
public:
	FitnessAppWrapper();
	~FitnessAppWrapper();

	void runApp(void);
	void loadDailyPlan(ifstream &fileStream, DietPlan &plan);
	void loadDailyPlan(ifstream &fileStream, ExercisePlan &plan);

	void loadWeeklyPlan(ifstream &fileStream, DietPlan weeklyPlan[]);
	void loadWeeklyPlan(ifstream &fileStream, ExercisePlan weeklyPlan[]);

	void displayDailyPlan(DietPlan &plan);
	void displayDailyPlan(ExercisePlan &plan);

	void displayWeeklyPlan(DietPlan weeklyPlan[]);
	void displayWeeklyPlan(ExercisePlan weeklyPlan[]);

	void storeDailyPlan(ofstream &fileStream, DietPlan &plan);
	void storeDailyPlan(ofstream &fileStream, ExercisePlan &plan);

	void storeWeeklyPlan(ofstream &fileStream, DietPlan plan[]);
	void storeWeeklyPlan(ofstream &fileStream, ExercisePlan plan[]);

	void displayMenu(void);

private:
	DietPlan weeklyDietPlan[7];
	ExercisePlan weeklyExercisePlan[7];
};


#endif