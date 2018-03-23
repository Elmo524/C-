#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x;
	string s="";
	
	cout << "Enter a value for x between 1 and 4: ";
	cin >> x;
	
	switch (x)
	{
		case 0:
			cout << "Case 0" << x + 1 << endl;
			break;
		
		case 1:
			cout << "Case 1: " << 2*x + 1 << endl;
			break;
	
		case 2:
			cout << "Case 1" << x*x + 3*x +1 << endl;
			break;
			
		case 3:
			cout << "Case 2" << "Something for case 3.... " << endl;
			break;
			
		case 4:
			cout << "Something for case 4...." << endl;
			break;
			
		default:
			x%2==0 ? s="even" : s="odd";
			cout << "This is " << s << endl;
	}
}
