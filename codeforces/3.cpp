#include <iostream>

using namespace std ;

int main (void)
{
	int n,count=0;
	cin >> n ;
	string *s;
	s=new string[n];
	
	for(int i=0 ;i<n; i++)
	{
		cin >> s[i];
		//cout << s[i] << endl ;
		
	}
	for(int i=0 ;i<n; i++)
	{
		if(s[i]==s[i+1]) count=count ;
		else count++ ;
	}
cout << count << endl ;
return 0;
}
