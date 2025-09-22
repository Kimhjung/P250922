// #inclue = 포함하다
#include <iostream>		// C++ standerd
#include <conio.h>		// c standard
// #include "iostream"

using namespace std;

// 매크로
// 1이 2보다 크다 / 참: 1반환, 거짓:2반환
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

// x, y 좌표값이 0이면 true / 0이 아니면 false
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
	//전진 키 눌렀을 때
	if (KeyCode == 'W' || KeyCode == 'w')
	{
		//지금 위치에서 한 칸 위 좌표값이 0이면
		if (Predict(PlayerX, PlayerY - 1))
		{
			// 한 칸 전진
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
	//이 방식이 틀린 이유
	//1. 렌더링에 프로세스 코드를 넣음
	//2. 최대 공간의 벽에만 막힘. 맵 중간의 장애물은 막히지 않음

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