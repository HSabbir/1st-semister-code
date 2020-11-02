#include<iostream>
#include<iomanip>
using namespace std;

int main (void)
{
	int a,b;
	float c,d ;

	while(cin >> a >> b >> c)
	{
		d=c*b;

		cout << "NUMBER = "<< a << endl ;
		cout << "SALARY = U$ "<< fixed << setprecision (2) << d << endl ;
	}
	
return 0;
}
