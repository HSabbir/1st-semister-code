#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;

double mysqrt(double N)
{
	double X=1.0,Y;
	
	while(true)
	{
		Y=(X+(N/X))/2 ;
		
		if(Y-X<=0.0001)
	    {
			break;
		}
		else 
		{
		 X=Y ;
		}

	}
	return Y ;
}

int main (void)
{
	double number,Root,ActualRoot;

	cout << "Please enter a positive value:" << endl ;
	cin >> number ;

	ActualRoot=sqrt(number);

	Root=mysqrt(number);

	cout << "MY square root is:" << fixed << setprecision(8) << Root << endl ;
	cout << "Cmath square root is:"<< fixed << setprecision (8) << ActualRoot << endl ;

	if(ActualRoot>Root)
	cout << "Absolute difference is:"<< fixed <<  setprecision (8) << ActualRoot-Root << endl ;
	else 
	cout << "Absolute difference is:"<< fixed <<  setprecision (8) << Root-ActualRoot << endl ;

return 0;
}
