#include <iostream>

using namespace std;

int main() {

	int count = 0;
	cin >> count;
	
	for (int i = 1; i <= count; ++i)
	{
		for (int j = 1; j <= count - (i - 1); ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	
	//역방향 출력

	// case 1(me)
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < 0 + i; ++j)
		{
			cout << " ";
		}
		for (int j = 0; j < count - i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}

	// case 2
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			if (i > j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
	

	return 0;
}