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
	float Amount_Paid_Back;
	float Interest_Paid;
	
	// define L
	cout << "Enter the loan amount: ";
	cin >> Loan_Amount;
	
	L = Loan_Amount;
	
	// define R
	cout << "Enter the annual interest rate: ";
	cin >> Annual_Interest_Rate;
	
	R = Annual_Interest_Rate;
	
	// define N
	cout << "Enter the number of payments made: ";
	cin >> Payments_Made;
	
	N = Payments_Made;
	
	// Define M_I_R
	Monthly_Interest_Rate = R / 12;
	
	// calculate results
	Payment = (Monthly_Interest_Rate * pow ((1 + Monthly_Interest_Rate), N) / (pow ((1 + Monthly_Interest_Rate), N) - 1))  * L;
	
	// Calculate Amount Paid Back
	Amount_Paid_Back = Payment * N;
	
	//Calculate Interest Paid
	Interest_Paid = Amount_Paid_Back - L;
	
	
	// results
	cout << "Loan Amount: " << setw(10) << "$" << setprecision(2) << L << endl;
	cout << "Monthly Interst Rate: " << setw(10) << setprecision(2) << R / 12 << "%" << endl;
	cout << "Number of Payments: " << setw(10) << setprecision(2) << N << endl;
	cout << "Monthly Payment: " << setw(10) << "$" << setprecision(2) << Payment << endl;
	cout << "Amount Paid Back: " << setw(10) << "$" << setprecision(2) << Amount_Paid_Back << endl;
	cout << "Interest Paid: " << setw(10) << "$" << setprecision(2) << Interest_Paid;
	
}
