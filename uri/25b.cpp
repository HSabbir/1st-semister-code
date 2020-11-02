#include <iostream>

using namespace std ;

int main (void)
{
	float a ;
	cin >> a ;

	if(a>=0 && a<=25.00000)	
	{
		cout << "Intervalo [0,25]"	<< endl ;
	}
	else if(a>25.00000 && a<=50.00000)
	{
		cout << "Intervalo (25,50]"	<< endl ;
	}
	else if(a>50.00000 && a<=75.00000)
	{
		cout << "Intervalo (50,75]"	<< endl ;
	}
	else if(a>75.00000 && a<=100.00000)
	{
		cout << "Intervalo (75,100]"	<< endl ;
	}
	else
	{
		cout << "Fora de intervalo" << endl ;
	}
return 0;
}
