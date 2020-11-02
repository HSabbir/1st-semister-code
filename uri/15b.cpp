#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main (void)

{
	double a,b,c,d,e ;

	cin >> a >> b ;
	cin >> c >> d ;
	
	e= sqrt(pow(a-c,2)+pow(b-d,2)) ;

	cout << fixed << setprecision (4) << e << endl ;
return 0;
}
