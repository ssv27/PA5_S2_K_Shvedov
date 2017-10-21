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
	int choice = 0;
	ExercisePlan ePlan[7];
	DietPlan dPlan[7];
	cout << "Welcome to The Fitness App" << endl;
	system("pause");
	system("cls");
	while (choice != 9)
	{
		displayMenu();
		cout << "\nPlease select an option: ";
		cin >> choice;
		if (choice == 1)
		{
			ifstream file;
			file.open("dietPlans.txt");
			if (file.is_open())
			{
				loadWeeklyPlan(file, dPlan);
				file.close();
				displayWeeklyPlan(dPlan);
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}
		}
		else if (choice == 2)
		{
			ifstream file;
			file.open("exercisePlans.txt");
			if (file.is_open())
			{
				loadWeeklyPlan(file, ePlan);
				file.close();
				displayWeeklyPlan(ePlan);
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}
		}
		else if (choice == 3)
		{
			ofstream file;
			file.open("dietPlans.txt");
			if (file.is_open())
			{
				storeWeeklyPlan(file, dPlan);
				file.close();
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}

		}
		else if (choice == 4)
		{
			ofstream file;
			file.open("exercisePlans.txt");
			if (file.is_open())
			{
				storeWeeklyPlan(file, ePlan);
				file.close();
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}

		}
		else if (choice == 5)
		{
			displayWeeklyPlan(dPlan);
		}
		else if (choice == 6)
		{
			displayWeeklyPlan(ePlan);
		}
		else if (choice == 7)
		{

		}
		else if (choice == 8)
		{

		}
		else if (choice == 9)
		{
			cout << endl << "Thank you for using this program!" << endl;
			return;
		}
		if (choice != 9)
		{
			choice = 0;
		}
		system("pause");
		system("cls");
	}

}
void FitnessAppWrapper::loadDailyPlan(ifstream &fileStream, DietPlan &plan)
{
	fileStream >> plan;
}
void FitnessAppWrapper::loadDailyPlan(ifstream &fileStream, ExercisePlan &plan)
{
	fileStream >> plan;
}

void FitnessAppWrapper::loadWeeklyPlan(ifstream &fileStream, DietPlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		loadDailyPlan(fileStream, weeklyPlan[i]);
	}
}
void FitnessAppWrapper::loadWeeklyPlan(ifstream &fileStream, ExercisePlan weeklyPlan[])
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

void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, DietPlan plan[])
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan[i]);
	}
}
void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, ExercisePlan plan[])
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan[i]);
	}
}

void FitnessAppWrapper::displayMenu(void)
{
	cout << "\tMAIN MENU\n";
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