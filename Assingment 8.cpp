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
		cout << "(" << x[i] << " , " << y[i] << ")" << endl;	
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
		sum+=a[i];
	return sum/sz;
}

double sum(double a[],int sz)
{
	double sum = 0.0;
	for(int i=0; i<sz; i++)
		sum+=a[i];
	return sum;
}

double sum_of_square(double a[], int sz)
{
	double sum = 0.0;
	double soq;
	for(int i=0; i<sz; i++)
	{
		soq = a[i] * a[i];
		sum+=soq;
	}
		
	return sum;
}

double sum_of_products(double a[], double b[], int sz)
{
	double sum = 0.0;
	double sop;
	for(int i=0; i<sz; i++)
	{
		sop = a[i] * b[i];
		sum+=sop;
	}
	return sum;
}

double std_sample(double a[], int sz)
{
	double mu=average(a,sz);
	double sum_variance = 0.0;
	for(int i=0; i<sz; i++)
	{
		double variance = a[i]-mu;
		variance*=variance;
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
	
	//cout << "Sum of the x values is: " << sum(x,num) << endl;
	//cout << "Sum of the y values is: " << sum(y,num) << endl;
	
	//cout << "Sum of the square of the x values is: " << sum_of_square(x,num) << endl;
	//cout << "Sum of the products of x and y is: " << sum_of_products(x,y,num) << endl;
	
	int m = (sum_of_products(x,y,num) - sum(x,num) * average(y,num) ) / (sum_of_square(x,num) - sum(x,num) * average(x,num));
	
	int b = average(y,num) - (m * average(x,num));
//	cout << m << endl;
//	cout << b << endl;
	cout << "Equation of least squares line: y = " << m << "x + " << b << endl;
	
	cout << "Standard deviation of x is: " << std_sample(x,num) << endl;
	cout << "Standard deviation of y is: " << std_sample(y,num) << endl;
	
	
}
