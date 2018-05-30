#include <iostream>
using namespace std;

struct PointXY
{
	//fields x and y, alsoo known as member variables
	double x; // could also do: double x, y;
	double y;
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

int main()
{
	PointXY p1;
	PointXY p2;
	
	cout << " P1: "<< endl;
	p1 = getXY_FromKeyboard();
	
	cout << "P2: " << endl;
	p2 = getXY_FromKeyboard();
	
	double slope = ( p2.y - p1.y) / ( p2.x - p1.x );
	cout << "Slope of the line is: " << slope << endl;
	
	return 0;
}
