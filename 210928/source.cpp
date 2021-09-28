#include <iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

void Input();
void Process();
void Render();

//0이외 켜짐
//0 종료
//1 초기화
//2 입력 중
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
	system("cls"); //콘솔창 clear
	cout << "그린다." << endl;
}