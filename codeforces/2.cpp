#include <iostream>
#include <string>

using namespace std ;

int main (void)
{
	string s,b,c;
	cin >> s ;
	int n;
	n=s.length();
	
    b=toupper(s[0]) ;	
	
	for(int i=1; i< n;i++)
	{
		if(s[i]>= 'A' || s[i]<='Z') s[i]=tolower(s[i]) ;
		//else c=c+s[i] ;
		c=c+s[i] ;
	}

	cout << b << c << endl ;
return 0;
}
