#include <iostream>

using namespace std;

int main() {

	int count = 0;

	cin >> count;

	/*
	for (int i = 1; i <= count; ++i)
	{
		for (int j = 1; j <= count - (i - 1); ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/
	
	for (int i = 1; i <= count; ++i)
	{
		for (int j = 0; j < 0+(i-1); ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < count - (i - 1); ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}