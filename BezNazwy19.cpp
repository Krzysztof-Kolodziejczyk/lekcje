#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "podaj wysokosc";
	cin >> n;
	char array[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]= ' '; 
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			array[i][j]= 'x';
			 
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array[i][j]; 
		}
		cout << endl;
	}
}
