#include <iostream>

using namespace std;

int main()
{
	int n=10;
	int array[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]=(i+1)*(j+1);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
}
