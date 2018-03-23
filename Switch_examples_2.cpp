#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	string s="";
	
	cout << "Enter an alphabetickcharacter: ";
	cin >> c;
	
	switch (c)
	{
		case 'a': case 'A':
		case 'e': case 'E':
		case 'i': case 'I':
		case 'o': case 'O':
		case 'u': case 'U':
			cout << "You enterd a vowel!" << endl;
			break;
			
		default:
			cout << "You entered a constanent?" << endl:
	}
}
