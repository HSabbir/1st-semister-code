#include <iostream>
#include <string>

using namespace std ;

int main (void)
{
	string s,t;
	getline(cin,s);
	int n;
	n=s.length();

	for(int i=0;i<n;i++)
	{
		if(s[i]>= 'a' && s[i] <= 'z')
		{
			s[i]=toupper(s[i]);
			t=t+s[i] ;
		}
		else t=t+s[i] ;
	}
	cout << t << endl ;
return 0;
}
