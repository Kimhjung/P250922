// #inclue = �����ϴ�
#include <iostream>		//C++ standerd
#include <conio.h>		//C standard
//#include <string>		// iostream�� ������(iostream ������ ���� ��)
// #include "iostream"

using namespace std;

int main()
{
	// C ���ڿ� X, �迭�� ���� �� �ھ� �־�� �� / Java, C#, CPP ���ڿ� O
	// utf-8 ��������
	//char A[6] = { 'H','e','l','l','o','\0' };

	string Greeting = "�ȳ�";
	string Greeting2 = "������";

	// 'A' != "A"
	// "A" == { 'A', '\0' }

	cout << Greeting + " " + Greeting2 << endl;
}