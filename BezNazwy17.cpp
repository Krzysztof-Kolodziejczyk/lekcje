#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));
	int n;
	cout << "podaj n ";
	cin >> n;
	int array[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]=rand()%10;
		}
	}
	/*
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}*/
	
	int sumy[n];
	int suma;
	for(int i=0; i<n; i++)
	{
		suma=0;
		for(int j=0; j<n; j++)
		{
			suma=suma+array[i][j];
		}
		sumy[i]=suma;
	}
	
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << sumy[i] << " ";
	}
	
	int max=-10000;
	int idx;
	for(int i=0; i<n; i++)
	{
		if(sumy[i]>max)
		{
			max=sumy[i];
			idx=i;
		}
	}
	cout << endl << endl << idx;
}
