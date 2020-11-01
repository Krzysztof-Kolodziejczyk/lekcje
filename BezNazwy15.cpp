#include <iostream>

using namespace std;

int main()
// do kazdej liczby w ciagu dodaje 1
{
	int n;
	cout << "podaj n ";
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	int array2[n];
	for(int i=0; i<n; i++)
	{
		int min=10000;
		int idx;
		for(int j=0; j<n; j++)
		{
			if(array[j]<min)
			{
				min=array[j];
				idx=j;
			}
		}
		array2[i]=min;
		array[idx]=100000;
	}
	for(int i=0; i<n; i++)
	{
		cout << array2[i] << " ";
	}
}
