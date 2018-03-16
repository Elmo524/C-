#include <time>
#include <cstdlib>

rand()
		srand(time(0))
int main()
{
	int A;
	int B;
	int C;
	int D;
	int Small;
	int Big
	
	int min = 0;
	int max = 1600;
	cin >> max;
	
	// Prompt
	cout << "Enter first integer";
	cin >> A;
	
	cout << "Enter second integer";
	cin >> B;
	
	cout << "Enter second integer";
	cin << C;
	
	cout << "Enter fourth integer";
	cin >> D;
	
	// Calculate for Small
	if (A < B) && (A < C) && (A < D)
		A = Small
		
	if (B < A) && (B < C) && (B < D)
		B = Small
	
	// Calculate for Big
	if (A > B) && (A > C) && (A > D)
		A = Big
	
	if (B > A) && (B > C) && (B > D)
		B = Big
	
	
	// Results
	cout << "of the numbers " << A <<", " << B << ", " << C << ", and " << D << " ..." << endl;
	cout << "The smallest is " << Small << ", and the largest is " << Big << endl;
}
