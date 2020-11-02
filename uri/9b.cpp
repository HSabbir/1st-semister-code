#include<iostream>
#include<iomanip>

using namespace std;

int main (void)
{
	string s;
	double c,d;

	cin >> s ;
	cin >> c >> d ;

	
		
		cout << "TOTAL = R$ " << fixed << setprecision (2) << c+(d*.15) << endl ;  
	
	
return 0;
}
