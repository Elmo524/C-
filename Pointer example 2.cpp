#include <iostream>
using namespace std;

int main()
{
	int x[]={4,7,11,15,19};
	int *p = &x[4];
	
	cout << p   << ", " << &x[0] << endl;
	cout << p+1 << ", " << &x[1] << endl;
	cout << p+2 << ", " << &x[2] << endl;
	cout << p+3 << ", " << &x[3] << endl;
	cout << p+4 << ", " << &x[4] << endl;
	
	//for(int i=0;i<5;i++)
	//	cout << *(p+i) << ", x[" << i << "] =" << x[i] << endl;
		
	for (int i=4;i>=0;i--)
		cout << *(p-i) << ", x[" << i << "] =" << x[i] << endl;
	
}
