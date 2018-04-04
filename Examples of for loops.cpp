#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int x=1, y=1; x<=10;x++, y*=2)
	{
		cout << "x: " << x << ", y: " << y << endl;
		sum+=x+y;
	}
	
	cout << "sum = " << sum << endl;
	return 0;
}
