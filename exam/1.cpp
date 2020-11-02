//This program reads two digit integer number and  show the riverse number

#include<iostream>

using namespace std ;

int main (void)
{
	int number,n,p;
	cout << "Please enter a two digit positive integer:" << endl ;
	cin >> number ;
	
	n=(number%10);//value of percentage by 10
	p=(number/10) ;//value of number divied by 10

	if(n==0) cout << p << endl ;
	else if (p==0) cout << n << endl ;
	else cout << n << p << endl ;

return 0;
}
