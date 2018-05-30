#include <iostream>
using namespace std;

struct PointXY
{
	//fields x and y, alsoo known as member variables
	double x; // could also do: double x, y;
	double y;
	
	double slope(PointXY b)
	{
		return ( b.y-y ) / ( b.x-x );
	}
};


PointXY getXY_FromKeyboard()
{
	PointXY temp;
	
	cout << "Enter a value for X: ";
	cin >> temp.x;
	
	cout << "Enter a value for Y: ";
	cin >> temp.y;
	
	return temp;
}

double slope1(PointXY a, PointXY b)
{
	return ( b.y-a.y ) / ( b.x-a.x );
}

int main()
{
	PointXY p1;
	PointXY p2;
	
	cout << "P1: "<< endl;
	p1 = getXY_FromKeyboard();
	
	cout << "P2: " << endl;
	p2 = getXY_FromKeyboard();
	
	cout << "Slope of the line is: " << slope1(p1,p2) << endl;
	
	return 0;
}
