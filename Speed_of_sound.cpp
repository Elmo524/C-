#include <iostream>
#include <iomanip>
using namespace std;

const short int AIR_FT_SEC = 1100;
const short int WATER_FT_SEC = 4900;
const short int STEEL_FT_SEC = 16400;

const short int DECIMAL_DIGITS_PRECESION;

int main()
{
	//declare variables
	char choice;
	double distance, time;
	
	// do/while loop for our program
	do
	{
		do
		{
			//display the menu
			cout << "Speed of Sound Menu"<< endl;
			cout << endl;
			cout << "1. Air ("<< AIR_FT_SEC << "ft/sec)" << endl;
			cout << "2. Water ("<< WATER_FT_SEC << "ft/sec)" << endl;
			cout << "3. Steel ("<< STEEL << "ft/sec)" << endl;
			cout << "4. quit this program" << endl;
			cout << endl;
			cout << "Enter an option (1-4): ";
			cin >> choice;
			
			if (choice < '1' || choice > '4')
				cout << "Invalid choice, please choose 1, 2, 3, or 4." << endl;
				
		} while ( choice < '1' || choice > '4');
		
		cout << endl;
		
		if ( choice != '4')
		{		
			// get the distace from the user (must be >= 0)
			do
			{
				cout << "Enter the distace sound travelled through medium: ";
				cin >> distace;
			
				if ( distance < 0 )
					cout << "Invalaid distance, must be greater than or equal to 0" << endl << endl;
		
			}while( distance < 0);
		
		} // end of choice != '4' if statement
		cout << fixed << setprecision(DECIMAL_DIGITS_PRECESION);
		
		switch(choice)
		{
			case '1':	time = distance / AIR_FT_SEC;
						cout << "It took sound " << time << " seconds to ";
						cout << "travel through water." << endl;
						break;
					
			case '2':	time = distance / WATER_FT_SEC;
						cout << "It took sound " << time << " seconds to ";
						cout << "travel through steel." << endl;
						break;
						
			case '3':	time = distance / STEEL_FT_SEC;
						cout << "It took sound " << time << " seconds to ";
						cout << "travel through steel." << endl;
						break;
			default: 	cout << "Good by!	See you next time!" << endl;
		}
	
	} while ( choice != '4' );
	
	return 0;
}
