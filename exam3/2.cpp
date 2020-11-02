#include <iostream>

using namespace std ;

int count1=0,count2=0 ;

void cycle(int n)
{
	count1=0;
	while(true)
	{
		
		if(n==1) break ;
		
		else if(n%2 !=0)
		{
			n=3*n+1;
		count1++ ;
		}
	else
		{
		 n=n/2 ;
		count1++ ;
		}

	
	}

	if(count1>count2) count2=count1 ;
	//return count ;
}

int main (void)
{
	int num1,num2,count;
	cin>> num1 >> num2;

	for(int i=num1;i<=num2;i++)
	{
		cycle(i);
	}
	cout << num1 << ' ' << num2 << ' ' <<  count2+1 << endl ;
return 0;
}
