#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

double * buildArray(double min, double max, int arrSize)
{
	double *t = new double[arrSize];
	
	srand(time(0));
	for(int i=0;i<arrSize;i++)
		t[i] = (double)rand()/RAND_MAX * 100.0;
	return t;		
}

bool writeArrayToBinaryFile(string filename, double *a, int size)
{
	fstream outFile;
	outFile.open(filename.c_str(),ios_base::out|ios_base::binary);
	if (!outFile) return false;
	outFile.write((char *)a,sizeof(double)*size);
	outFile.close();	
	return true;
}

int main()
{
	double *arr = buildArray(1,10,25); // fill array of 25 random numbers from 1 to 10
	writeArrayToBinaryFile("test.dat",arr,25); // write the data to a binary file
	
	return 0;
}

