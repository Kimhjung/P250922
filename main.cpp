// #inclue = �����ϴ�
#include <iostream>		// C++ standerd
#include <conio.h>		// c standard
// #include "iostream"

using namespace std;

// ��ũ��
// 1�� 2���� ũ�� / ��: 1��ȯ, ����:2��ȯ
#define MAX(a,b) 1 > 2 ? 1 : 2;

int World[10][10] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int KeyCode;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

char Sprites[10] = { ' ', '*' };

bool bIsRunning = true;

int PlayerMinX = 1;
int PlayerMinY = 1;
int PlayerMaxX = 8;
int PlayerMaxY = 8;

void Input()
{
	KeyCode = _getch();
}

void Process()
{
	if (KeyCode == 'W' || KeyCode == 'w')
	{
		PlayerY--;
	}
	else if (KeyCode == 'A' || KeyCode == 'a')
	{
		PlayerX--;
	}
	else if (KeyCode == 'S' || KeyCode == 's')
	{
		PlayerY++;
	}
	else if (KeyCode == 'D' || KeyCode == 'd')
	{
		PlayerX++;
	}
	else if (KeyCode == 'Q' || KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	system("cls");

	if (PlayerX < PlayerMinX) {
		PlayerX = PlayerMinX;
	}
	else if (PlayerY < PlayerMinY) {
		PlayerY = PlayerMinY;
	}
	else if (PlayerX > PlayerMaxX) {
		PlayerX = PlayerMaxX;
	}
	else if (PlayerY > PlayerMaxY) {
		PlayerY = PlayerMaxY;
	}

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else
			{
				cout << Sprites[World[Y][X]];
			}

		}
		cout << "\n";
	}
}

int main() {
	//frame, deltaseconds
	while (bIsRunning)
	{
		Process();
		Render();
		Input();
	}
}