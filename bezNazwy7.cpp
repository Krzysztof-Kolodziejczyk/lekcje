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
	for(int i=0; i<n; i++)
	{
		array[i]=array[i]+1;
	}
	for(int i=0; i<n; i++)
	{
		cout << array[i] << " ";
	}
}
