// #inclue = 포함하다
#include <iostream>		//C++ standerd
#include <conio.h>		//C standard
//#include <string>		// iostream에 들어가있음(iostream 없으면 에러 남)
// #include "iostream"

using namespace std;

int main()
{
	// C 문자열 X, 배열을 만들어서 한 자씩 넣어야 함 / Java, C#, CPP 문자열 O
	// utf-8 지원해줌
	//char A[6] = { 'H','e','l','l','o','\0' };

	string Greeting = "안녕";
	string Greeting2 = "여러분";

	// 'A' != "A"
	// "A" == { 'A', '\0' }

	cout << Greeting + " " + Greeting2 << endl;
}