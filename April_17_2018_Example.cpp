// All necessary include directives here
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void output_float (float n, int w, int d);

// main function here
int main()
{
	// your main program goes here
	float pi = 3.14159265;
	
	output_float(pi, 10, 1); // outputs:		3.1
	cout << endl;
	
	output_float(pi, 10, 2); // outputs:		3.14
	cout << endl;
	
	output_float(pi, 10, 3); // outputs:		3.142
	cout << endl;
	
	output_float(pi, 10, 4); // outputs:		3.1416
	cout << endl;
	
	return 0; // this line is optional
}

// function implementation
void output_float(float n, int w, int d)
{
	cout << fixed << setprecision(d);
	cout << setw(w) << n;
}
