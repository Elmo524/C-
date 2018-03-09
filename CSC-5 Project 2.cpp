#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float Loan_Amount;
	float Payments_Made;
	float Annual_Interest_Rate;
	float R;
	float L;
	float N;
	float Monthly_Interest_Rate;
	float Payment;
	
	// define L
	cout << "Enter the loan amount: ";
	cin >> L;
	
	Loan_Amount = L;
	
	// define R
	cout << "Enter the annual interest rate: ";
	cin >> R;
	
	Annual_Interest_Rate = R;
	
	// define N
	cout << "Enter the number of payments made: ";
	cin >> N;
	
	Payments_Made = N;
	
	// Define M_I_R
	Monthly_Interest_Rate = R / 12;
	
	
	// results
	cout << "Loan Amount: " << setw(10) << "$" << setprecision(2) << L << endl;
	cout << "Monthly Interst Rate: " << setw(10) << setprecision(2) << R / 12 << endl;
	cout << "Number of Payments: " << setw(10) << setprecision(2) << N << endl;
	cout << "Monthly Payment: " << setw(10) << "$" << setprecision(2) << Payment <<
	
}
