#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double R;
	double L;
	int N;
	double Rate;
	double x;
	double Payment;
	double Amount_Paid_Back;
	double Interest_Paid;
	
	// define Loan Amount
	cout << "Enter the loan amount: ";
	cin >> L;
	
	if ( L <= 0)
	{
		cout << "You have entered an invalid amount. Please re-enter amount of Loan" << endl;
		return 1;
	}
		
	// define Annual Interest Rate
	cout << "Enter the annual interest rate: ";
	cin >> R;
		
	// define Payments Made
	cout << "Enter the number of payments made: ";
	cin >> N;
		
	// Define Monthly Interests Rate
	Rate = R / 12;
	double Monthly_Interest_Rate = Rate / 100;
	
	// calculate Monthly Payment
	x = pow((1 + Monthly_Interest_Rate), N);
	
	Payment = (Monthly_Interest_Rate * x / (x - 1) )  * L;
	
	// Calculate Amount Paid Back
	Amount_Paid_Back = Payment * N;
	
	//Calculate Interest Paid
	Interest_Paid = Amount_Paid_Back - L;
	
	
	// results
	cout << fixed;
	cout << "Loan Amount: " << setw(10) << "$" << setw(9) << setprecision(2) << L << endl;
	cout << "Monthly Interst Rate: " << setw(10) << setprecision(2) << Rate << "%" << endl;
	cout << "Number of Payments: " << setw(12) << N << endl;
	cout << "Monthly Payment: " << setw(6) << "$" << setw(9) << setprecision(2) << Payment << endl;
	cout << "Amount Paid Back: " << setw(5)<< "$" << setw(9) << setprecision(2) << Amount_Paid_Back << endl;
	cout << "Interest Paid: " << setw(8) << "$" << setw(9) << setprecision(2) << Interest_Paid;
	
}
