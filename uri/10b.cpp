#include<iostream>
#include<iomanip>

using namespace std ;

int main (void)
{	
	string a,b;
	int c,d;
	float e,f ;

	cin >> a >> c >> e ;
	cin >> b >> d >> f ;

	cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << (c*e)+(d*f) << endl ; 

return 0;
}
