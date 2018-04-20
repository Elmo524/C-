#include <iostream>
#include <iomanip>
using namespace std;

//prototype for fallingDistance
float fallingDistance (float g, float t);

//prototype for kineticEnergy
float kineticEnergy (float m, float v);

double gravitational_force(double m1, double m2, double d);

int main()
{
	float t;
	float m;
	float v;
	double m1;
	double m2;
	
	//your code to read in user input for:
	//time, mass and velocity.
	cout << "How many seconds did it take for the object to hit the floor?  ";
	cin >> t;
	
	cout << "How heavy is the object in kilograms?  ";
	cin >> m;
	
	cout << "How many meters per second did the object travel?  ";
	cin >> v;
	
	//function call to fallingDistance
	float d = fallingDistance (9.8, t);

	//function call to kineticEnergy
	float ke = kineticEnergy (m, v);
	
	cout << "Enter the mass of the first object.  ";
	cin >> m1;
	
	cout << "Enter the mass of the second object.  ";
	cin >> m2;
	
	double gf= gravitational_force(m1, m2, d);

	//output the results in a nice formatted manner
	cout << endl;
	cout << "The distance the object fell is: " << d << " meters" << endl;
	cout << endl;
	cout << "The amount of kinetic energy the object has is: " << ke << endl;
	cout << endl;
	cout << "The amount of gravitaional force between the two masses is: " << gf << endl;
	
	return 0;
}

// implementation of fallingDistance
float fallingDistance (float g, float t)
{
	double d;
	d = 0.5 * g * (t*t);
	return d;
}

// implementation of kineticEnergy
float kineticEnergy (float m, float v)
{
	float ke;
	ke = 0.5 * m * (v*v);
	return ke;
}

double gravitational_force(double m1, double m2, double d)
{
	// compute G*m1*m2/d*d
	//and return the result.
	double G;
	G = 6.673e-11;
	
	double F;
	F = G*m1*m2/d*d;
	return F;
}
