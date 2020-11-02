#include<iostream>
#include<iomanip>

using namespace std;

int main (void)

{
	float a,b,c ;
	double pi=3.14159;

	cin >> a >> b >> c ;

	cout << "TRIANGULO: " << fixed << setprecision (3) << .5*a*c << endl ;
	cout << "CIRCULO: " << fixed << setprecision (3) << pi*c*c << endl ;
	cout << "TRAPEZIO: " << fixed << setprecision (3) << .5*(a+b)*c<< endl ;
	cout << "QUADRADO: " << fixed << setprecision (3) << b*b << endl ;
	cout << "RETANGULO: " << fixed << setprecision (3) << a*b << endl ;

return 0;
}
