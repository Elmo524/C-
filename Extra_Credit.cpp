#include <iostream>
#include <string>
using namespace std;

struct playerInfo
{
	string name;
	short int num;
	short int points_scored;
	
	void set_Name()
	{
		cout << "Enter the player name: " << endl;
		cin >> name;
	}
	
	void set_Number()
	{
		cout << "Enter the player's number: " << endl;
		cin >> num;
	}
	
	void set_Points_scored()
	{
		cout << "Enter the amount of points the player scored" << endl;
		cin >> points_scored;
	}
		
	short int Num()
	{
		return num;
	}
	
	short int Points_scored()
	{
		return points_scored;
	}
	
	
	
};

int main()
{
	playerInfo p;
	
	p.set_Name();
	p.set_Number();
	p.set_Points_scored();
}

