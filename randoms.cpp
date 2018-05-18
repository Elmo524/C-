#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rand_num(int max)
{
	static bool seeded = false;
	if(!seeded)
	{
		srand(time(0));
		seeded=true;
	}
	return (rand()%max)+1;
}

int** fillArray(int x)
{
	int **t = new int*[x];
	for(int i=0;i<x;i++)
		t[i] = new int [x];

	for(int i=0;i<x;i++)
		for(int j=0; j<x;j++)
			t[i][j]=rand_num(9);
	
	return t;
}

int main()
{
	int x;
	// Prompt user for size of array
	cout << "How many random numbers you to you want? ";
	cin >> x;
	
	// call randoms
 	int **a= fillArray(x);
	
for(int i=0;i<x;i++)
{
	

		for(int j=0; j<x;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
}
			for(int i=0;i<x;i++)
				delete a[i];
			delete[]a;	
	return 0;
}
