#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int Days = 1;
	int Max_Days;
	int Days_Pay = 1;
	double total;
			
	cout << "Enter amount of days you have worked within a month: ";
	cin >>  Max_Days;
	
	
		
	while (Days <= Max_Days)
	{
		Days_Pay = Days_Pay * 2;
		
		cout << "Day: " << Days++ << "	" << Days_Pay << "cents" << endl;
		
	}
	
	return 0;
}
