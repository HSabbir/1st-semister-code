#include <iostream>

using namespace std ;

int main (void)
{
	int n,i,num;
	cin >> n ;
	int m=0;
	int p=0;

	for(i=1;i<=n;i=i+1) 
	{
		
		cin >> num ;
		if(num>=0)
		{	
		
			m=m+1 ;		
		}
		else
		{
			
			p=p+1;
		}
		
	}
	cout << m << ' ' << p << endl;
return 0;
}
