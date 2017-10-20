#include "FitnessAppWrapper.h"

FitnessAppWrapper::FitnessAppWrapper()
{
	//empty
}

FitnessAppWrapper::~FitnessAppWrapper()
{
	//empty
}

void FitnessAppWrapper::runApp(void)
{

}
void FitnessAppWrapper::loadDailyPlan(fstream &fileStream, DietPlan &plan)
{
	fileStream >> plan;
}
void FitnessAppWrapper::loadDailyPlan(fstream &fileStream, ExercisePlan &plan)
{
	fileStream >> plan;;
}

void FitnessAppWrapper::loadWeeklyPlan(fstream &fileStream, DietPlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		loadDailyPlan(fileStream, weeklyPlan[i]);
	}
}
void FitnessAppWrapper::loadWeeklyPlan(fstream &fileStream, ExercisePlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		loadDailyPlan(fileStream, weeklyPlan[i]);
	}
}

void FitnessAppWrapper::displayDailyPlan(DietPlan &plan)
{
	cout << plan;
}
void FitnessAppWrapper::displayDailyPlan(ExercisePlan &plan)
{
	cout << plan;
}

void FitnessAppWrapper::displayWeeklyPlan(DietPlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		displayDailyPlan(weeklyPlan[i]);
	}
}
void FitnessAppWrapper::displayWeeklyPlan(ExercisePlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		displayDailyPlan(weeklyPlan[i]);
	}
}

void FitnessAppWrapper::storeDailyPlan(ofstream &fileStream, DietPlan &plan)
{
	fileStream << plan;
}
void FitnessAppWrapper::storeDailyPlan(ofstream &fileStream, ExercisePlan &plan)
{
	fileStream << plan;
}

void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, DietPlan &plan)
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan);
	}
}
void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, ExercisePlan &plan)
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan);
	}
}

void FitnessAppWrapper::displayMenu(void)
{
	cout << "\t\tMAIN MENU\n";
	cout << "\t1.    Load weekly diet plan from file\n";
	cout << "\t2.    Load weekly exercise plan from file\n";
	cout << "\t3.    Store weekly diet plan to file\n";
	cout << "\t4.    Store weekly exercise plan to file\n";
	cout << "\t5.    Display weekly diet plan to screen\n";
	cout << "\t6.    Display weekly exercise plan to screen\n";
	cout << "\t7.    Edit daily diet plan\n";
	cout << "\t8.    Edit daily exercise plan\n";
	cout << "\t9.    Exit\n";
}