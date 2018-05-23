#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void output_array( double *a, double sz)
{
	for(int i=0;i<sz;i++)	
	{
		cout << *(a+i) << " ";
		if ( i>0 && i%10==0 ) cout << endl;
	}
}

int getFileSize(string filename)
{
	fstream inFile;
	inFile.open(filename.c_str(),ios_base::in|ios_base::binary);
	if (!inFile) return false;
	char c;
	int count=0;
	while ( inFile.get(c)) count++;	
	inFile.close();	
	cout << filename << " is " << count << " bytes in length." << endl;
	return count;
}

double * readArrayFromBinaryFile(string filename, int size)
{
	cout << "Creating double integer array of " << size << " elements." << endl;
	double *t = new double [size];
	fstream inFile;
	inFile.open(filename.c_str(),ios_base::in|ios_base::binary);
	if (!inFile) exit(1);
	inFile.read((char *)t,size*sizeof(double));
	//for(int i=0;i<size;i++) inFile.read((char *)&t[i],sizeof(short int));
	inFile.close();	
	return t;	
}

int main()
{
	string filename="test.dat";
	
	int filesize = getFileSize(filename);
	int array_size = filesize / sizeof(double); // number of elements in array
	
	double *arr = readArrayFromBinaryFile(filename,array_size);
	
	// output contents of the array
	output_array(arr,array_size);
	return 0;
}

