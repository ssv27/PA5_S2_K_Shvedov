#include "FitnessAppWrapper.h"

FitnessAppWrapper::FitnessAppWrapper()
{
	//empty
}

FitnessAppWrapper::~FitnessAppWrapper()
{
	//empty
}


void FitnessAppWrapper::setDietPlan(DietPlan &newDietPlan)
{

}
void FitnessAppWrapper::setExercizePlan(ExercisePlan &newExercisePlan)
{

}

void FitnessAppWrapper::runApp(void)
{

}
void FitnessAppWrapper::loadDailyPlan(fstream &fileStream, DietPlan &plan)
{

}
void FitnessAppWrapper::loadDailyPlan(fstream &fileStream, ExercisePlan &plan)
{

}

void FitnessAppWrapper::loadWeeklyPlan(fstream &fileStream, DietPlan weeklyPlan[])
{

}
void FitnessAppWrapper::loadWeeklyPlan(fstream &fileStream, ExercisePlan weeklyPlan[])
{

}

void FitnessAppWrapper::displayDailyPlan(DietPlan &plan)
{

}
void FitnessAppWrapper::displayDailyPlan(ExercisePlan &plan)
{

}

void FitnessAppWrapper::displayWeeklyPlan(DietPlan &plan)
{

}
void FitnessAppWrapper::displayWeeklyPlan(ExercisePlan &plan)
{

}

void FitnessAppWrapper::storeDailyPlan(DietPlan &plan)
{

}
void FitnessAppWrapper::storeDailyPlan(ExercisePlan &plan)
{

}

void FitnessAppWrapper::storeWeeklyPlan(DietPlan &plan)
{

}
void FitnessAppWrapper::storeWeeklyPlan(ExercisePlan &plan)
{

}

void FitnessAppWrapper::displayMenu(void)
{
	cout << "MAIN MENU";
	cout << "1.    Load weekly diet plan from file\n";
	cout << "2.    Load weekly exercise plan from file\n";
	cout << "3.    Store weekly diet plan to file\n";
	cout << "4.    Store weekly exercise plan to file\n";
	cout << "5.    Display weekly diet plan to screen\n";
	cout << "6.    Display weekly exercise plan to screen\n";
	cout << "7.    Edit daily diet plan\n";
	cout << "8.    Edit daily exercise plan\n";
	cout << "9.    Exit\n";
}