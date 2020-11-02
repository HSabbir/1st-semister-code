#include<iostream>
#include<iomanip>

using namespace std;

int main (void)

{
	float r;
	double pi=3.14159 ;

	cin >> r ;

	cout <<"VOLUME = " << fixed << setprecision (3) << (4/3.0)*pi*r*r*r << endl ; 
return 0;
}
