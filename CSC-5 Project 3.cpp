#include <iostream>
using namespace std;

int main()
{
	int A;
	int B;
	int C;
	int D;
	int Small;
	int Big;
	
	// Prompt
	cout << "Enter first integer: ";
	cin >> A;
	
	cout << "Enter second integer: ";
	cin >> B;
	
	cout << "Enter second integer: ";
	cin >> C;
	
	cout << "Enter fourth integer: ";
	cin >> D;
	
	// Calculate for Small
	if (A < B && A < C && A < D)
	 Small = A;
		
	if (B < A && B < C && B < D)
	 Small = B;
		
	if (C < A && C < B && C < D)
	 Small = C;
		
	if (D < A && D < B && D < C)
	 Small = D;
	
	// Calculate for Big
	if (A > B && A > C && A > D)
	 Big = A;
	
	if (B > A && B > C && B > D)
	 Big = B;
		
	if (C > A && C > B && C > D)
	 Big = C;
		
	if (D > A && D > B && D > C)
	 Big = D;
	
	// Results
	cout << "of the numbers " << A <<", " << B << ", " << C << ", and " << D << " ..." << endl;
	cout << "The smallest is " << Small << ", and the largest is " << Big << endl;
}
