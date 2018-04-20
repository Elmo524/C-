#include <iostream>
using namespace std;

// prototype
bool isEven(int n);

int main()
{
	for(int i=-10; i<=10; i++)
	{
		if( isEven(i)==true) cout << i << " is even." << endl;
		else cout << i << " is odd." << endl;
	}
	return 0;
}

//implementation
bool isEven(int n)
{
	return n%2==0;
}
