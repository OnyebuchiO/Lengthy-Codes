#include <iostream>
#include <cmath>

/* Author: Onyebuchi Obi
 * Program: compute_sin
 * Description: Reads a number x from input, an angle in radians. 
 *    Computes an approximation to sin(x) using an 4th-order Taylor series.
 */

using namespace std;

int fact(int); // declares a function the skeleton defines for you.
double const THREE = 3.0;
double const FIVE = 5.0;
double const SEVEN = 7.0;


int main(int argc, char *argv[])
{
   // Declare any variables you need here
   double x, x3, x5, x7;
   double sin;
   
   // Prompt the user
   cout << "Enter x in radians:  ";
   
   // get input
   cin >> x;
   
   // Do some operations
   x3 =  pow(x,3.0);
   x5 = pow(x,5.0);
   x7 = pow(x,7.0);
    
   sin = x - (x3/fact(THREE)) + (x5/fact(FIVE)) +                 (x7/fact(SEVEN));
   
   // Print the result to the user
   cout << sin << endl;
   
   // You're done
   return 0;
   
}

// here's the actual definition of fact, declared earlier.
int fact(int n)
{
   int result = 1;
   for (int i = 1; i <= n; i++) {
      result = result * i;
   }
   return result;
}

