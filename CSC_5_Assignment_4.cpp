#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int days = 1;
	int max_days;
	double days_pay = 0.01;
	double total;
			
	cout << "Enter amount of days you have worked within a month: ";
	cin >>  max_days;
	
	do
	{
		cout << setw(4) << "day: " << setw(2) << days++ << setw(7) << "$" << setw(8) << days_pay << endl;
		
		days_pay = days_pay * 2;
		
		total = days_pay - 0.01;
		
	} while (days <= max_days);
	
	
	
	cout << "Total: " << setw(7) << "$" << setw(8) << total << endl;
	
	return 0;
}
