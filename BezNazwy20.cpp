#include <iostream>

using namespace std;

int main()
{
	int n=49;
	char array[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			array[i][j]=' ';	
		}
	}
	
	int currentXNumber=1;
	int start=n/2;
	int row=0;
	while(start>=0)
	{
		int counter=0;
		int currentPosition=start;
		while(counter<currentXNumber)
		{
			array[row][currentPosition]='X';
			counter++;
			currentPosition++;
		}
		row++;
		start--;
		currentXNumber+=2;
	}
	start=n/2;
	array[row][start]='X';
	row++;
	array[row][start]='X';
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << array[i][j];
		
		}
		cout << endl;
	}
}
