#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_num(int max)
{
	int x;
	
	unsigned seed = time(0);
	cout << "seed = " << seed << endl;
	
	srand(seed);
	
	for(int i=0;i<max;i++)
	{
		cout << rand() << endl;
	}
	
	return 0;
}

int* fillArray(int x)
{
	int *t = new int[x];
	for(int i=0;i<x;i++)
		t[i]=  rand_num(1000);
	return t;
}

int main()
{
	// Prompt user for size of array
	cout << "How many random numbers you to you want? ";
	
	// call randoms
 	int *a= fillArray(10);
	
	cout << *a << endl;
	delete[]a;
	a= fillArray(10);
	
	return 0;
}
