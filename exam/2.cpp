#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std ;

int main (void)
{
	double R,m ,volume,root;
	float pi=3.14 ;
	
	cout << "Please enter the radious of the disc in cm:" << endl;
	cin >> R ;

	cout << "Please enter the fraction m of the sector cut out:" << endl;
	cin >> m ;

	root=sqrt((1-(m*m))) ;

	volume=(1/3.0)*pi*(R*R*R)*(m*m)*root ;

	cout <<"The volume of the cone is " << fixed << setprecision(1) << (volume/250.0) << " cups." << endl ;
	//cout << root << endl ;
return 0;
}
