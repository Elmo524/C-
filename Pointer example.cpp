#include <iostream>
using namespace std;

int main()
{
	int *a = new int [4];
	
	*a=5;	//   x
	*(a+1)=8;//  y
	*(a+2)=13;// z
	*(a+3)= *(a) + *(a+1);
	
	cout << *a << "+" << *(a+1) << "=" << *(a+3) << endl;
	
	*(a+3) = *(a+2) - *(a+1);
	cout << *(a+2) << "-" << *(a+1) << "=" << *(a+3) << endl;
}
