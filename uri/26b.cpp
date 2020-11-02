#include<iostream>
#include <iomanip>

using namespace std ;

int main (void)
{
	int a,b;
	
	cin >> a >> b ;

	if(a==1) 
	{
		float f;
		f=b*4.00 ;
		cout << "Total: R$ " << fixed << setprecision(2) << f << endl ;
	}
	else if(a==2) 
	{
		float f;
		f=b*4.50 ;
		cout << "Total: R$ " << fixed << setprecision(2) << f << endl ;
	}
	else if(a==3) 
	{
		float f;
		f=b*5.00 ;
		cout << "Total: R$ " << fixed << setprecision(2) << f << endl ;
	}
	else if(a==4) 
	{
		float f;
		f=b*2.00 ;
		cout << "Total: R$ " << fixed << setprecision(2) << f << endl ;
	}
	else if(a==5) 
	{
		float f;
		f=b*1.50 ;
		cout << "Total: R$ " << fixed << setprecision(2) << f << endl ;
	}
return 0;
}

