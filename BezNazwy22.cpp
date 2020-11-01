#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int n=4;
	int array1[n][n];
	int array2[n][n];
	int arraySuma[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array1[i][j]=rand()%10;
			array2[i][j]=rand()%10;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			arraySuma[i][j]=array1[i][j]+array2[i][j];
		}
	}
	

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array1[i][j] << "  ";
			
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array2[i][j] << "  ";
			
		}
		cout << endl;
	}
	cout << endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << arraySuma[i][j] << "  ";
			
		}
		cout << endl;
	}
}
