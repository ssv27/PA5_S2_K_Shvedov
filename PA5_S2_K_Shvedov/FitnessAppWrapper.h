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

	void setDietPlan(DietPlan &newDietPlan);
	void setExercizePlan(ExercisePlan &newExercisePlan);


	void runApp(void);
	void loadDailyPlan(fstream &fileStream, DietPlan &plan);
	void loadDailyPlan(fstream &fileStream, ExercisePlan &plan);

	void loadWeeklyPlan(fstream &fileStream, DietPlan weeklyPlan[]);
	void loadWeeklyPlan(fstream &fileStream, ExercisePlan weeklyPlan[]);

	void displayDailyPlan(DietPlan &plan);
	void displayDailyPlan(ExercisePlan &plan);

	void displayWeeklyPlan(DietPlan &plan);
	void displayWeeklyPlan(ExercisePlan &plan);

	void storeDailyPlan(DietPlan &plan);
	void storeDailyPlan(ExercisePlan &plan);

	void storeWeeklyPlan(DietPlan &plan);
	void storeWeeklyPlan(ExercisePlan &plan);

	void displayMenu(void);

private:
	DietPlan weeklyDietPlan[7];
	ExercisePlan weeklyExercisePlan[7];
};


#endif