// Just a basic little .cpp project where I can test different small things
// Will seperate them in their own neat little functions and just call the function in main() when testing
// by Jake R.

#include "stdafx.h"
#include <iostream>


void PracticingIterations()
{
	int x;

	std::cout << "How many iterations for the countdown?: ";
	std::cin >> x;

	do
	{
		std::cout << x << std::endl;
		--x;
	} while (x >= 0);
}

int main()
{
	PracticingIterations(); // FUNCTION FOR CODE TO BE TESTED GOES HERE

	// Clear buffer and wait for input to close program
	std::cout << "\n\nPress Enter to Exit . . .";
	std::cin.clear(); std::cin.ignore(INT_MAX, '\n');
	std::cin.get();

	return 0;
}

