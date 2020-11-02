#include <iostream>

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
	int A,B,j;
	cin >> A >> B ;

	if(A>=B)
	{
		for ( j=B ;j<=A;j++)
		{
			isPrime(j);
			if(isPrime(j)==true) cout << j << endl ;
		}
	}
	else
	{
		for ( j=A ;j<=B;j++)
		{
			isPrime(j);
			if(isPrime(j)==true) cout << j << endl ;
		}
	}
	

	
return 0;
}
