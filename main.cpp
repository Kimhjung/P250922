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
	{1, 0, 1, 0, 0, 0, 1, 0, 0, 1},
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

// x, y ��ǥ���� 0�̸� true / 0�� �ƴϸ� false
bool Predict(int NewX, int NewY)
{
	if (World[NewY][NewX] == 0) {
		return true;
	}

	return false;
}

void Input()
{
	KeyCode = _getch();
}

void Process()
{
	//���� Ű ������ ��
	if (KeyCode == 'W' || KeyCode == 'w')
	{
		//���� ��ġ���� �� ĭ �� ��ǥ���� 0�̸�
		if (Predict(PlayerX, PlayerY - 1))
		{
			// �� ĭ ����
			PlayerY--;
		}
	}
	else if (KeyCode == 'A' || KeyCode == 'a')
	{
		if (Predict(PlayerX -1, PlayerY))
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'S' || KeyCode == 's')
	{
		if (Predict(PlayerX, PlayerY + 1))
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'D' || KeyCode == 'd')
	{
		if (Predict(PlayerX + 1, PlayerY))
		{
			PlayerX++;
		}
	}
	else if (KeyCode == 'Q' || KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	system("cls");


	/*
	//�� ����� Ʋ�� ����
	//1. �������� ���μ��� �ڵ带 ����
	//2. �ִ� ������ ������ ����. �� �߰��� ��ֹ��� ������ ����

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
	*/

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