#include <iostream>
#include <string.h>

using namespace std ;

int main (void)
{
	int n=10*10*10*10 ;
	bool prime[n+1] ;
	memset(prime,true,n+1);

	for(int i=4 ;i<n;i+=2)
	{
		prime[i]=false ;
	}
	
	for(int i=3;i<n;i+=2)
	{
		if(prime[i]==false) continue ;

		for(int j=i*i;j<n;j=j+i)
		{
			prime[j]=false ;		
		}
	}
	for(int i=2;i<n;i++)
	{
		if(prime[i]==true) cout << i << endl ;
	}
	
return 0;
}
