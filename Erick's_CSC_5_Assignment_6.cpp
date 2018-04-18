#include <iostream>
#include <iomanip>
using name space std;

//prototype for fallingDistance
float fallingDistance (float d, float g, float t);

//prototype for kineticEnergy
float kineticEnergy ( float ke, float m, float v );

// end result format
void output_float (d, int w, int x);

int main()
{
	//your code to read in user input for:
	//time, mass and velocity.
	cout << "How many seconds did it take for the object to hit the floor? " << endl;
	cin >> t;
	
	cout << "How heavy is the object in kilograms? " << endl;
	cin >> m;
	
	cout << "how many meters per second did the object travel?" << endl;
	cin >> v;
	
	//function call to fallingDistance
	float fallingDistance (d, 9.8, t);

	//function call to kineticEnergy
	float kineticEnergy (ke, m, v );

	//output the results in a nice formatted manner
	cout << "The distance the object fell is: " << d << endl;
	cout << "The amount of kinetic energy the object has is: " << ke << endl;
	
	return 0;
}

// implementation of fallingDistance
float fallingDistance (float d, float g, float t)
{
	d = 1/2 * g * (t*t);
}

// implementation of kineticEnergy
float kineticEnergy ( float ke, float m, float v )
{
	ke = 1/2 * m * (v*v);
}
