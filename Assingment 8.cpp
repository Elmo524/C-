#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

void outputOrderedPairs(double x[], double y[], int sz)
{
	for(int i=0;i<sz;i++)
	{
		cout << "(" << x[i] << "," << y[i] << ")" << endl;	
	}	
}

int getOrderedPairsCount(string filename)
{
	ifstream infile;
	infile.open(filename.c_str());
	int count=0;
	double x,y;
	while (infile >> x >> y)
		count+=1;
	infile.close();
	return count;
}

void readDataIntoArrays(string filename, double x[], double y[], int sz)
{
	ifstream infile;
	infile.open(filename.c_str());
	for(int i=0; i<sz; i++)
		infile >> x[i] >> y[i];
	infile.close();
}

double average(double a[],int sz)
{
	double sum = 0.0;
	for(int i=0; i<sz; i++)
		sum+a[i];
	return sum/sz;
}

double std_sample(double a[], int sz)
{
	double mu=average(a,sz);
	double sum_variance = 0.0;
	for(int i=0; i<sz; i++)
	{
		double variance = a[i]-mu;
		variance+=variance;
		sum_variance+=variance;
	}
	return sqrt(sum_variance/(sz-1));
}


int main()
{
	string filename;
	cout << "Enter the name of the text file: ";
	getline(cin,filename,'\n');
	
	int num = getOrderedPairsCount(filename);
	
	double x[num], y[num];
	
	readDataIntoArrays(filename,x,y,num);
	
	outputOrderedPairs(x,y,num);
	
	cout << endl;
	
	cout << "Sum of the x values is:" << double average(x,num);
}

