# include <iostream>
# include <cmath>
# include  "functions.h"

int main()
{ 
using namespace std;
// create analytical function of h
//  Input initial value
 double Tmax, Tmin;
 // Inpute minimum and maximum values given f(Tmx) * f(Tmin) < 0
 cout << "f(Tmax) * f(Tmin) must be < 0" << endl;
 do
 {
 cout << "Enter an maximum guess Tmax: "; 
 cin >> Tmax;
 cout << "Enter an minimum guess Tmin: "; 
 cin >> Tmin;
 cout << "f(Tmax) * f(Tmin) = " << f(Tmax) * f(Tmin) << endl;
 } while(f(Tmax)*f(Tmin) > 0);
 
 // define tolerance aind initial error
 double tol = 1e-12;
 double error = tol + 1;
 int max_it = 100;
 int it = 0;
 // Define the T1 variable that holds the latest result
 double T1;


 while (fabs(error) > tol && it < max_it)
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
     cout << "iteration :" << it << " error :" << error << endl;
 }

if (fabs(error) <= tol)
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
