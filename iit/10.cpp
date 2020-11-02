#include <iostream>

using namespace std ;

int** makeMatrix(int r,int c)
{
	int **Matrix;
	Matrix=new int*[r];

	for(int i=0;i<r;i++)
	{
		Matrix[i]=new int[c];
	}
	return Matrix;
}

void Input(int **Matrix ,int r ,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin >>	Matrix[i][j] ;
		}		
	}

}

void Add(int **pM,int** dM,int** oM,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			oM[i][j]=pM[i][j] +dM[i][j] ;  
		}		
	}	

}

void Print(int** oM,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout <<  oM[i][j] << '\t' ;
		}		cout << endl ;
	}	

}

void Delete(int** Matrix ,int r)
{
	for(int i=0;i<r;i++)
	{
		delete [] Matrix[i] ;
	}delete [] Matrix ;

}

int main (void)
{
	int **pM;
	int **dM;
	int **oM;

	int r,c;
	cin >> r >> c ;

	pM=makeMatrix(r,c);
	dM=makeMatrix(r,c);
	oM=makeMatrix(r,c);

	Input(pM,r,c);
	Input(dM,r,c);

	Add(pM,dM,oM,r,c);

	Print(oM,r,c);

	Delete(pM,r);
	Delete(dM,r);
	Delete(oM,r);
	return 0;
}
