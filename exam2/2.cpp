#include <iostream>
#include <cmath>

using namespace std ;

bool isPrime(int number )
{
	bool a=true ;

	if(number==1) 
	{
		a=false;
	return a ;
	
	}
	for(int i=2;i<=number/2 ;i++)
	{
		if(number==2)
		{
			a=a;
			break ;
		}
		else if(number%i==0 )
		{
			a=false;
			break;
		}
	 else a=a ;
	}
return a;
}

int main ()
{
	int number,root,i,j,k;//j=root of the smallest prime number greater than number ; k= root of the largest prime number less than number 
	
	cout << "Please enter a positive integer greater than 3:" << endl ;
	cin >> number ;
	
	if(number <4)
	{
		cout << "Invalid input" << endl ;
		return 0;
	}

	root=sqrt(number);
	for(i=root;;i++)
	{
		isPrime(i);
		if(isPrime(i)==true)
		{
			j=i;
			break ;
		}
	}

	for(i=root;;i--)
	{
		isPrime(i);
		if(isPrime(i)==true)
		{
			k=i;
			break ;
		}
	}
	cout << k*k << " <= " << number << " <= " << j*j << endl ;
return 0;
}
