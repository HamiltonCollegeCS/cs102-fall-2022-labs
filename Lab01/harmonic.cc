/**
 * CS-102 Lab 01: Calculates the harmonic mean of two given numbers.
 * @file harmonic.cc
 * @author Dave Perkins
 * @collaborators Darren Strash, Alistair Campbell, Mark Bailey
 * @date September 1, 2022
 */

#include <iostream>

using namespace std;

double harmonic_mean(double x, double y);

// Controls operation of the program.
int main() 
{
   double value1 = 0.0;
   double value2 = 0.0;

   cout << "Please enter a number: ";
   cin >> value1;
   cout << "Please enter another number: ";
   cin >> value2;

   const double result = harmonic_mean(value1, value2);
   cout << "The harmonic mean is: " << result << endl;
   return 0;
}

/**
 * Returns the harmonic mean of two given numbers.
 * @param x the first number
 * @param y the second number
 * @return The harmonic mean of the given numbers.
 */
double harmonic_mean(double x, double y) 
{
   return (2 * x * y) / (x + y);
}
