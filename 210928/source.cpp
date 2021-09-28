#include <iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

char Input(); //사용자의 입력을 받는다.  Input
void Process(char Key); //물체를 배치한다.(가상공간에서) Process
void Render(); //그림을 그린다.(가상 공간에서 사진 찍기) Render

//개발자가 구현하는 Process
void CustomProcess(char Key);
//개발자가 구현하는 Render
void CustomRender();

bool bGameState = true;

int Gold = 0;

int main()
{
	//Game Engine
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		CustomProcess(Key);
		Render();
	}

	return 0;
}

char Input()
{
	//단순 콘솔 입력
	//조이스택, 패드
	//터치패드, 마우스
	char Key;

	cin >> Key;

	return Key;
}

void Process(char Key)
{
	cout << Key << endl; //log

	if (Key == 'q' || Key == 'Q')
	{
		bGameState = false;
	}
	
}

void Render()
{
	system("cls"); //콘솔창 clear
	
	cout << "그린다." << endl;
	
	CustomRender();
}


void CustomProcess(char Key)
{
	if (Key == 'G' || Key == 'g')
	{
		Gold++;
	}

}

void CustomRender()
{
	cout << "Gold : " << Gold << endl;
}