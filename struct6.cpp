#include <iostream>
using namespace std;

struct PointXY
{
	//fields x and y, alsoo known as member variables
	double x; // could also do: double x, y;
	double y;
	
	void getXY_FromeKeyborad()
	{
		cout << "Enter a value for X: ";
		cin >> x;
		
		cout << "Enter a value for Y: ";
		cin >> y;
	}
	
	void setXY(double x_value, double y_value)
	{
		x=x_value;
		y=y_value;
	}
	
	void output()
	{
		cout << "(" << x << ", " << y << ")";
	}
	
	double slope(PointXY b)
	{
		return ( b.y-y ) / ( b.x-x );
	}
};



int main()
{
	PointXY plane[10] = { {-2, 0 }, { 0, 1 }, { 1, 5 }, { 3, 1 },
						  { 5, 1 }, { 7, 0 }, { 5,-1 }, { 3,-1 },
						  { 1,-5 }, { 0,-1 } };
	/*plane[0].setXY(-2,0);
	plane[1].setXY(0,1);
	plane[2] = { 1,5 };
	plane[3] = { 3,1 };
	*/
	
	for(int i=0;i<10;i++)
	{
		cout << "Point" << i << ": ";
		plane[i].output();
		cout << endl;
	}
	
}
