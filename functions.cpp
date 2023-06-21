#include "functions.h"


double f( double T)
{ 
 double result =  T*T - 1;
 return result;
}

double fbar( double T)
{ double result = 2*T;
    return result;
}
