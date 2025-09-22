#include <iostream>

using namespace std;

int main() {
	/*
	int sum = 0;
	int multi = 0;

	for (int i = 1; i <= 100; i++) 
	{
		sum += i;

		// 프로그램 돌릴 때 *, / 연산 느림
		if (i % 3 == 0) 
		{
			multi += i;
		}
	}
	cout << sum << endl;
	cout << multi << endl;

	multi = 0;
	// 강사님 방법
	for (int i = 3; i <= 100; i += 3) 
	{
		multi += i;
	}
	cout << multi << endl;
	*/

	/*
	int Number[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	
	for (int j = 0; j < 10; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			Number[i] = i + 1;
		}
	}
	*/

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