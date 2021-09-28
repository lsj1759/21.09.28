#include <iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

char input(); //사용자의 입력을 받는다.  input
void process(char key); //물체를 배치한다.(가상공간에서) process
void render(); //그림을 그린다.(가상 공간에서 사진 찍기) render

//개발자가 구현하는 process
void customprocess(char key);
//개발자가 구현하는 render
void customrender();

bool bgamestate = true;

int gold = 0;

int main()
{
	//game engine
	while (bgamestate)
	{
		char key = input();
		process(key);
		render();
	}

	return 0;
}

char input()
{
	//단순 콘솔 입력
	//조이스택, 패드
	//터치패드, 마우스
	char key;

	cin >> key;

	return key;
}

void process(char key)
{
	cout << key << endl; //log

	if (key == 'q' || key == 'q')
	{
		bgamestate = false;
	}

	customprocess(key);
}

void render()
{
	system("cls"); //콘솔창 clear
	
	cout << "그린다." << endl;
	
	customrender();
}


void customprocess(char key)
{
	if (key == 'g' || key == 'g')
	{
		gold++;
	}

}

void customrender()
{
	cout << "gold : " << gold << endl;
}