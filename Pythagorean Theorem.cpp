/*
	Program: Pythagorean theorem calculator
	Written by Anfernee Durden
	This program will calculate the hypotenuse of a triangle.
	Last modified: 10/10/2021
*/

#include <iostream>
#include <math.h>

int main()
{
	double a1, b1, c1, a2, b2, c2; 

	std::cout << "Please enter the A side lenth." << "\n";
	std::cin >> a1;

	std::cout << "Please enter the b side lenth." << "\n";
	std::cin >> b1;

	a2 = pow(a1, 2);
	b2 = pow(b1, 2);
	c1 = a2 + b2;
	c2 = sqrt(c1);

	std::cout << "The hypotenuse is equal to " << c2 << "\n";

	return 0;
}
