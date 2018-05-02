#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int my_rand (int max)
{
	static bool seeded=false;
	if (!seeded)
	{
		srand(time(0));
		seeded=true;
	}
	return (rand()%max)+1;
}

int main()
{
	int number_of_sides;
	
	cout << "Enter the number of sides of your die (must be 2 or more): ";
	cin >> number_of_sides;
	
	if( number_of_sides < 2)
	{
		cout << "must be 2 or more sides..." << endl;
		return 1;
	}
	
	// declare an array called sides with number_of_sides elements
	int sides [ number_of_sides ];
	
	// initialize the sides array elements all to zero.
	for (int i=0; i<number_of_sides; i++) sides[i]=0;
	
	int trials;
	cout << "How many trials do you want to simulate (max: 1000000000)? " ;
	cin >> trials;
	
	if ( trials > 1000000000 )
	{
		cout << "Number of trials must not be more than 1,000,000,000..." << endl;
		return 1;
	}
	
	// run the trials
	for(int i=1; i<=trials; i++)
	{
		int roll = my_rand( number_of_sides );
		sides[ roll-1 ]++;
	}
	
	// output the result
	for(int i=0; i<number_of_sides; i++)
	{
		cout << "Side" << i+1 << ": " << sides[i];
		cout << "(" << 100*(double)(sides[i])/(trials) << "%)" << endl;
	}
}
