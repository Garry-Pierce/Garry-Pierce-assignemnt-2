// Garry Pierce assignemnt 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Option1, Option2, i, I, n, phoneNumber[7], enters = 5;
string death= "You died to the enemy";

void loadLock(int loads, string error) // passing parameters through methods using values
{
	for (int I = 1; I <= loads; ++I) // for loop increases to 5 to display text 5 times.
	{
		cout << error << endl;
	}
}

class Wagon
{
public:
	string Breed;
	string Wagon;
	int Speed;
};

int main()
{
	start: // Is called if the player restarts the game.
	cout << "You continue your journey after assignemnt 1 and stumple across a door." << endl;
	cout << "Enter 1 to enter the door." << endl;
	cout << "Enter 2 to continue walking." << endl;
retry:  //Restarts the if statement if given a wrong input.
	cin >> Option1;
	if (Option1 == 1)
	{
		cout << "Entering the door an enemy much more powerful than you are is directly in front of the door." << endl;
		cout << "You die and the game quick loads the last save" << endl;
		cout << "The save is after you enter the door." << endl;
		
		loadLock(enters, death); // changes the paramaters to use a diffrent int and string. (Passing by value)


		cout << "You restart the game." << endl;
		goto start;
		return 0;
	}
	else if (Option1 == 2)
	{
		cout << "Walking past the door a sales man approaches you with an offer of a new delux" << endl;
		cout << "wagon for you to purches all he needs is your phone number." << endl;
		cout << "Please enter you phone number one digit at a time." << endl;
		for (int i = 0; i < 7; ++i)
		{
			cin >> phoneNumber[i];
		}

		cout << "Just to confirm your phone number is ";

		//  print phone number array elements.
		for (int n = 0; n < 7; ++n) // another for loop to do the same as last time
		{
			cout << phoneNumber[n];
		}
	}
	else
	{
		cout << "Please enter option 1 for the door or 2 to keep walking." << endl;
		goto retry;
	}

	Wagon wagonObj1; // Made a class for the wagon
	wagonObj1.Breed = "Shire";
	wagonObj1.Wagon = "Stagecoach";
	wagonObj1.Speed = 5;

	cout << endl;
	cout << "A while later the man phones you with the wagon ready he says" << endl;
	cout << "This is a brand new " << wagonObj1.Wagon << "." << endl; 
	cout << "Pulled by two " << wagonObj1.Breed << " horses." << endl;
	cout << "And has a top speed of " << wagonObj1.Speed << " miles per hour!" << endl;
	cout << "What do you think?" << endl;

	cout << "Enter 1 to buy the wagon." << endl;
	cout << "Enter 2 to end the call." << endl;
retry1:  //Restarts the if statement if given a wrong input.
	cin >> Option2;
	if (Option2 == 1)
	{
		cout << "You buy the wagon and ride off into the sunset." << endl;
	}
	else if (Option2 == 2)
	{
		cout << "You don't buy the wagon and walk off into the sunset." << endl;
	}
	else
	{
		cout << "Please enter option 1 to buy the wagon or 2 to end the call." << endl;
		goto retry1;
	}


}
