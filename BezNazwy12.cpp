#include <iostream>

using namespace std;

int main()
// jezeli liczba jest ujemna to zastepujemy ja 0
{
	int n;
	cout << "podaj n ";
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	for(int i=0; i<n; i++)
	{
		if(array[i]<0)
		{
			array[i]=0;
		}
	
	}
	for(int i=0; i<n; i++)
	{
		cout << array[i] << " ";
	}
	
}
