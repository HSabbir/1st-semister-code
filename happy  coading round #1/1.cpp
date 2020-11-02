#include <iostream>

using namespace std ;

int main (void)
{
	int n;
	cin >> n ;

	for(int i=1 ; i <= n ; i=i+1)
	{
		int a,b;
		cin >> a >> b ;
		if((a&b) >=0 && (a&b) <=10 )
		{
			cout << "Case "<< i << ':'<< a+b << endl ;
		}
		
	} 
return 0;
}
