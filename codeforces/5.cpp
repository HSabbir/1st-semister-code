//228A

#include <iostream>

using namespace std ;

int** makeMatrix(int r,int c)
{
	int **Matrix;
	Matrix=new int[r];

	for(int i=0;i<r;i++)
	{
		Matrix[i]=new int[c];
	}
	return Matrix;
}

int main (void)
{
	int a,b,c,d,e=0;
	cin >> a >> b >> c >> d ;

	pM=makeMatrix(r,c);
	dM=makeMatrix(r,c);
	oM=makeMatrix(r,c);
	

return 0;
}
