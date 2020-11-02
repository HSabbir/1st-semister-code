#include <iostream>

using namespace std ;

int main (void)
{
	int n;
	cin >> n ;

	for(int i=0;i<=n ;i++)
	{
		int a ,b,c,d,e ;
		cin >> a >> b >> c >> d >> e ;
		
		if(a> (b||c||d||e))
		{		
			cout << a << endl;
		}
		else
		{
			cout << "nai" << endl;
		}
	}
return 0;
}
