#include <iostream>
#include <windows.h> //windows ������� include

using namespace std;

char Input(); //������� �Է��� �޴´�.  Input
void Process(char Key); //��ü�� ��ġ�Ѵ�.(�����������) Process
void Render(); //�׸��� �׸���.(���� �������� ���� ���) Render

//�����ڰ� �����ϴ� Process
void CustomProcess(char Key);
//�����ڰ� �����ϴ� Render
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
	//�ܼ� �ܼ� �Է�
	//���̽���, �е�
	//��ġ�е�, ���콺
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
	system("cls"); //�ܼ�â clear
	
	cout << "�׸���." << endl;
	
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