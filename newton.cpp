# include <iostream>
# include <cmath>
# include "functions.h"

int main()
{ 
using namespace std;
//    std::cout << sqrt(64) << std::endl;
// create analytical function of h
//  Input initial value
 cout << "Enter an initial guess: "; 
 double T0;
 cin >> T0;
 // define tolerance aind initial error
 double tol = 1e-12;
 double error = tol + 1;
 int max_it = 100;
 int it = 0;
 // Define the T1 variable that holds the latest result
 double T1;

 while (error > tol && it < max_it)
 { 
     T1 = T0 - f(T0) / fbar(T0);
     error = fabs(T1 - T0);
     T0 = T1;
     it++;
     cout << error << endl;
 }

if (error <= tol)
{
    cout << "The root is " << T0 << endl;
}
else
{
    cout << "Error, no convergence" << endl;
}
cin.get();
cin.get ();

return 0;
}
