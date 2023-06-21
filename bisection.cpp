# include <iostream>
# include <cmath>
# import "functions.h"

int main()
{ 
using namespace std;
//    std::cout << sqrt(64) << std::endl;
// create analytical function of h
//  Input initial value
 cout << "Enter an maximum guess: "; 
 double Tmax;
 cin >> Tmax;
 // Inpute minum value
 cout << "Enter an minimum guess: "; 
 double Tmin;
 cin >> Tmin;
 // define tolerance aind initial error
 double tol = 1e-12;
 double error = tol + 1;
 int max_it = 100;
 int it = 0;
 // Define the T1 variable that holds the latest result
 double T1;


 while (error > tol && it < max_it)
 { 
     T1 = 0.5* (Tmax + Tmin);
     error = f(T1);
     if (error < 0)
     { 
	 Tmin = T1;
     }
     else if (error > 0)
     { 
	 Tmax = T1;
     }
     it++;
     cout << error << endl;
 }

if (error <= tol)
{
    cout << "The root is " << T1 << endl;
}
else
{
    cout << "Error, no convergence" << endl;
}
cin.get();

return 0;
}
