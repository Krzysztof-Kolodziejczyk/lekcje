#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int n=20;
	int array[n][n];
	int max=-10000;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]=rand()%20;
			cout << array[i][j] << " ";
			
		}
		cout << endl;
	}
	
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(array[i][j]>max)
			{
				max=array[i][j];
			}
		}
		
		
	}
	cout << "najwieksza liczba tej tablicy to " << max;
}
