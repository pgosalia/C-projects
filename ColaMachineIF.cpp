// ColaMachineIF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "Please enter a number between 1-5. You will get a surpise drink.\n"; 
	cin >> number;
	if (number <1 || number >5)
	{
		cout << "Invaild number. Please enter a number between 1-5." << endl;
		cin >> number;
	}
	while (number >=1 && number <=5)
	{
		if (number == 1) 
		{
			cout << "You got Coke!" << endl;
			number = 15;
		}
		else if (number == 2)
		{
			cout << "You got Sprite!" << endl;
			number = 15;
		}
		else if (number == 3)
		{
			cout << "You got Fanta!" << endl;
			number = 15;
		}
		else if (number == 4)
		{
			cout << "You got water!" << endl;
			number = 15;
		}
		else if (number == 5)
		{
			cout << "You got Pepsi!" << endl;
			number = 15;
		}
	}
}

