//unit conversions. SI to imperial, and imperial to SI.

#include <iostream>

int main()
{
	using namespace std;
	std::cout << "What unit would you like to convert to?\n";
	std::cout << "\n1. KM to Miles.\n2. M to Ft. \n3. CM to In.\n";
	string unit;
	std::cin >> unit;
	
	
	if(unit == "1")
		{
		std::cout << "How many KM would you like to convert?\n";
			double km;
			std::cin >> km;
			double miles = km * 0.621371;
			std::cout << km << "KM is " << miles << "Miles.\n";
			return 0;
		}

	/* this if statement takes an input for string unit (which selects the type of unit the user would like to convert.
		Then it takes an input for the amount of units the user would like to convert. Then it multiplies the input by the conversion
		ratio and outputs the result.*/
	
	else if (unit == "2")
		{
		std::cout << "How many M would you like to convert?\n";
			double m;
		std::cin >> m;
		double ft = m * 3.28084;
		std::cout << m << "M is " << ft << "Ft.\n";
		return 0;
		}

	/* this if statement takes an input for string unit (which selects the type of unit the user would like to convert.
	* Then it takes an input for the amount of units the user would like to convert. Then it multiplies the input by the conversion
	* ratio and outputs the result */

	else if (unit == "3")
		{
		std::cout << "How many CM would you like to convert?\n";
		double cm;
		std::cin >> cm;
		double in = cm * 0.393701;
		std::cout << cm << "CM is " << in << "In.\n";
		return 0;
		//
		}
	//this one does the same for centimeters to inches. (gonna try getting that to show up as a fraction but I don't know how i would go about doing that.

	else
		{
		std::cout << "Invalid input.\n";
		return 1;
		//this is just in case the user inputs something other than 1, 2, or 3. returns 1 so kernel knows something failed and kills task.
		}

		//didnt work VV
		//double miles;
		//double kiloMeter;
		//std::cout << "How many KM would you like to convert?";
		//std::cin >> kiloMeter;
		//miles = kiloMeter * 0.621371;
		//std::cout << kiloMeter << "KM is " << miles << "Miles.";
		//break;

	//why won't this run?
	//
		
	return 2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
