#include <iostream>
using namespace std;

// prototype for bab_sqrt
double bab_sqrt(double, double);

int main()
{
	double N;
	
	// do range checking code here?
	cout << "Enter a value for N (must be positive):" ;
	cin >> N;
	
	if (N < 0)
	{
		cout << "Error! N must be positive" << endl;
		cout << "Enter a value for N (must be positive):" ;
		cin >> N;
	}
	
	// precision of answer (default is 0.00001)
	double result = bab_sqrt(N,0.00001); 
	
	cout << "The square root of " << N << " is " << result << endl;
	cout << "The square of the square root is " << result * result;
	cout << " (err=" << N-result*result << ")" << endl;
	
	return 0;
}

// implement bab_sqrt here...
double bab_sqrt(double num, double eps)
{
	double S = num;
	double T;
	double esp;
	
	T = S;
	S = 0.5 * (num/T+T);
	while (T-S > eps)
	{
		T = S;
		S = 0.5 * (num/T+T);
	}
	
	return S;
}
