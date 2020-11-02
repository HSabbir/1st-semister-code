//This program check prime number

#include <iostream>

using namespace std ;

int main (void)
{
	int number,count,i,n;
	cout << "Please enter an integer:" << endl ;
	cin >> number ;
	
	n=number/2 ;
	
	for( i=2;i <= n;i++)
	{
		//int result=0;		
		//result=number%i ;

		if(number%i ==0) 
		{
			count=1;		
			//cout << number << " is not prime" << endl ;			
			break;
		}
		else count=0;
	}	
	if(count == 0) cout << number << " is prime " << endl ;
	else cout << number << " is not prime" << endl ;

return 0;

}
