#include <iostream>
#include <string>

using namespace std ;

int main (void)
{
	string s,b;
	getline(cin,s) ;

	int count =0;
	int n;
	n=s.length();

	for(int i=0;i<n;i++)
	{
		if(s[i]>= 'a' && s[i]<= 'z') b=b+s[i] ;
		else continue ;
	}	
	for(int i=0; i<b.length();i++)
	{
		for(int j=i+1; j <b.length();j++)
		{
			char temp;
			if(b[i] > b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp ;
			}
		}
	}
	for(int i=0; i<b.length();i++)
	{
		if(b[i]==b[i+1]) count=count ;
		else if (b[i]!=b[i+1]) count ++ ;
	}
	cout << count << endl ;
return 0;
}
