#include <iostream>

using namespace std;

int main() {

	int sum = 0;
	int multi = 0;

	for (int i = 1; i <= 100; i++) 
	{
		sum += i;

		// ���α׷� ���� �� *, / ���� ����
		if (i % 3 == 0) 
		{
			multi += i;
		}
	}
	cout << sum << endl;
	cout << multi << endl;

	multi = 0;
	// ����� ���
	for (int i = 3; i <= 100; i += 3) 
	{
		multi += i;
	}
	cout << multi << endl;
}