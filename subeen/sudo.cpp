#include <iostream>

using namespace std ;

int main (void)
{
	int a;
	cin >> a ;
   int arr[a][a];

	for(int i=0; i<a;i++)
	{
		for(int j=0; j<a;j++)
		{
			cin >> arr[i][j] ;
			cout << arr[i][j] << '\t';
		}
		cout << endl ;
	}
	
	


return 0;
}
