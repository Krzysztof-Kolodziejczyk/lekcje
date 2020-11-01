#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int n=25;
	int array[n][n];
	int szukane;
	cout << "podaj liczbe jaka chcesz znalezc ";
	cin >> szukane;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]=rand()%100;
		}
		
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int licznik=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(array[i][j]==szukane)
			{
				licznik++;
			}
			
		}
			
		
	}
	cout << licznik << endl;
}
