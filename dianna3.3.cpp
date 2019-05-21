#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main() 
{
	char arr[999];
	int size, x;
	
	cout << "Enter characters without using space." << endl;
	cin >> arr;
	
	size = strlen(arr);
	
	cout << " " << endl;
	cout << "The characters in reverse: " << endl;
	
	for (x=size; x>=0; x--)
	{
	    cout << arr[x];
	}
	
	cout << " " << endl;
	cout << "The size of the aray is: " << size << "." << endl;
	
	_getch();
	return 0;
}
