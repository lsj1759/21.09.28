#include <iostream>
#include <windows.h> //windows ������� include

using namespace std;

void Input();
void Process();
void Render();

//0�̿� ����
//0 ����
//1 �ʱ�ȭ
//2 �Է� ��
//3 

bool bGameState = true;

char Key;

int main()
{
	//Game Engine
	while (bGameState)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}

void Input()
{

	cin >> Key;

}
void Process()
{
	if (Key == 'q' || Key == 'Q')
	{
		bGameState = false;
	}
}
void Render()
{
	system("cls"); //�ܼ�â clear
	cout << "�׸���." << endl;
}