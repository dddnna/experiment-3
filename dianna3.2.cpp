#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int provA[7], provB[7], provC[7];
	int x, y, z, a, b, c;
	cout << "Enter all recorded temperatures for a week in Province A, Province B, and Province C." << endl;

	for (x=0; x<7; x++)
	{
		cout << "Province A, Day " << x+1<< ": ";
		cin >> provA[x];
	}
	
	cout << " " << endl;

	for (y=0; y<7; y++)
	{
		cout << "Province B, Day " << y+1 << ": ";
		cin >> provB[y];
	}

	cout << " " << endl;

	for (z=0; z<7; z++)
	{
		cout << "Province C, Day " << z+1 << ": ";
		cin >> provC[z];
	}

	cout << " " << endl;

	cout << "Displaying Values: "<< endl;
	for (a=0; a<7; a++)
	{
	cout <<"Province A, Day " << a+1 << ": " << provA[a] << endl;
	}

	cout << " " << endl;

	for (b=0; b<7; b++)
	{
	cout << "Province B, Day " << b+1 << ": " << provB[b] << endl;
	}

	cout << " " << endl;

	for (c=0; c<7; c++)
	{
	cout << "Province C, Day " << c+1 << ": " << provC[c] << endl;
	}

	_getch();
	return 0;
}
