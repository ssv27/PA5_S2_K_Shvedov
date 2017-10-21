/*
* Programmer: Konstantin Shvedov
* Class: CptS 122
* Programming Assignment: PA5
* Date: 20/10/2017
* Description: This is where all functions that make the app work are called
*/

#include "FitnessAppWrapper.h"

//Empty constructor
FitnessAppWrapper::FitnessAppWrapper()
{
	//empty
}

//self used destructor
FitnessAppWrapper::~FitnessAppWrapper()
{
	//empty
}

//main app that makes the whole program run
void FitnessAppWrapper::runApp(void)
{
	int choice = 0, k = 0;
	ExercisePlan ePlan[7];
	DietPlan dPlan[7];
	cout << "Welcome to The Fitness App" << endl;
	system("pause");
	system("cls");
	while (choice != 9)
	{
		displayMenu();
		cout << "\nPlease select an option (1-9): ";
		cin >> choice;
		cout << endl;
		system("cls");

		//displays weekly plan for diet
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
		//displays weekly plan for exersise
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
		//stroes weekly plan for diet to file
		else if (choice == 3)
		{
			cout << "Storing Plan" << endl;
			ofstream file;
			file.open("dietPlans.txt");
			if (file.is_open())
			{
				storeWeeklyPlan(file, dPlan);
				file.close();
				cout << "Plan Stored!" << endl;
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}

		}
		//stores weekly plan for exersise to file
		else if (choice == 4)
		{
			cout << "Storing Plan" << endl;
			ofstream file;
			file.open("exercisePlans.txt");
			if (file.is_open())
			{
				storeWeeklyPlan(file, ePlan);
				file.close();
				cout << "Plan Stored!" << endl;
			}
			else
			{
				cout << "There was an error reading file" << endl;
			}

		}
		//displays weekly plan for diet
		else if (choice == 5)
		{
			displayWeeklyPlan(dPlan);
		}
		//displays weekly plan for exersise
		else if (choice == 6)
		{
			displayWeeklyPlan(ePlan);
		}
		//Lets user choose what day of the plan to edit and lets them edit it
		else if (choice == 7)
		{
			displayWeeklyPlan(dPlan);
			cout << "Which Diet Plan would you like to edit (1-7): ";
			cin >> k;
			cout << endl;
			system("cls");
			displayDailyPlan(dPlan[k - 1]);
			dPlan[k - 1].editPlan();
		}
		//Lets user choose what day of the plan to edit and lets them edit it
		else if (choice == 8)
		{
			displayWeeklyPlan(ePlan);
			cout << "Which Exercise Plan would you like to edit (1-7): ";
			cin >> k;
			cout << endl;
			system("cls");
			displayDailyPlan(ePlan[k - 1]);
			ePlan[k - 1].editPlan();
		}
		//exits the app
		else if (choice == 9)
		{
			cout << endl << "Thank you for using this program!" << endl << endl;
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

//loads plan for a day for diet
void FitnessAppWrapper::loadDailyPlan(ifstream &fileStream, DietPlan &plan)
{
	fileStream >> plan;
}

//loads plan for a day for diet
void FitnessAppWrapper::loadDailyPlan(ifstream &fileStream, ExercisePlan &plan)
{
	fileStream >> plan;
}

//loads plan for a week for diet
void FitnessAppWrapper::loadWeeklyPlan(ifstream &fileStream, DietPlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		loadDailyPlan(fileStream, weeklyPlan[i]);
	}
}

//loads plan for a week for diet
void FitnessAppWrapper::loadWeeklyPlan(ifstream &fileStream, ExercisePlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		loadDailyPlan(fileStream, weeklyPlan[i]);
	}
}

//displays one day of plan to screen
void FitnessAppWrapper::displayDailyPlan(DietPlan &plan)
{
	cout << plan;
}

//displays one day of plan to screen
void FitnessAppWrapper::displayDailyPlan(ExercisePlan &plan)
{
	cout << plan;
}

//displays all plans for a week to screen
void FitnessAppWrapper::displayWeeklyPlan(DietPlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		cout << "Diet Plan " << i + 1 << endl;
		displayDailyPlan(weeklyPlan[i]);
	}
}

//displays all plans for a week to screen
void FitnessAppWrapper::displayWeeklyPlan(ExercisePlan weeklyPlan[])
{
	for (int i = 0; i < 7; i++)
	{
		cout << "Exercise Plan " << i + 1 << endl;
		displayDailyPlan(weeklyPlan[i]);
	}
}

//stores the plan for the day to file
void FitnessAppWrapper::storeDailyPlan(ofstream &fileStream, DietPlan &plan)
{
	fileStream << plan;
}

//stores the plan for the day to file
void FitnessAppWrapper::storeDailyPlan(ofstream &fileStream, ExercisePlan &plan)
{
	fileStream << plan;
}

//stores the plan for the week to file
void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, DietPlan plan[])
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan[i]);
	}
}

//stores the plan for the week to file
void FitnessAppWrapper::storeWeeklyPlan(ofstream &fileStream, ExercisePlan plan[])
{
	for (int i = 0; i < 7; i++)
	{
		storeDailyPlan(fileStream, plan[i]);
	}
}

//displays menu
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