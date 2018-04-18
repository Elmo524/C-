#include <iostream>
#include <iomanip>
using namespace std;

//prototype for fallingDistance
float fallingDistance (float g, float t);

//prototype for kineticEnergy
float kineticEnergy (float m, float v);

int main()
{
	float t;
	float m;
	float v;
	
	//your code to read in user input for:
	//time, mass and velocity.
	cout << "How many seconds did it take for the object to hit the floor?  ";
	cin >> t;
	
	cout << "How heavy is the object in kilograms?  ";
	cin >> m;
	
	cout << "how many meters per second did the object travel?  ";
	cin >> v;
	
	//function call to fallingDistance
	float d = fallingDistance (9.8, t);

	//function call to kineticEnergy
	float ke = kineticEnergy(m, v);

	//output the results in a nice formatted manner
	cout << "The distance the object fell is: " << d << endl;
	cout << "The amount of kinetic energy the object has is: " << ke << endl;
	
	return 0;
}

// implementation of fallingDistance
float fallingDistance (float g, float t)
{
	float d;
	d = 1/2 * g * (t*t);
	return d;
}

// implementation of kineticEnergy
float kineticEnergy (float m, float v)
{
	float ke;
	ke = 1/2 * m * (v*v);
	return ke;
}
