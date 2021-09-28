#include <iostream>
#include <windows.h> //windows ������� include

using namespace std;

char input(); //������� �Է��� �޴´�.  input
void process(char key); //��ü�� ��ġ�Ѵ�.(�����������) process
void render(); //�׸��� �׸���.(���� �������� ���� ���) render

//�����ڰ� �����ϴ� process
void customprocess(char key);
//�����ڰ� �����ϴ� render
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
	//�ܼ� �ܼ� �Է�
	//���̽���, �е�
	//��ġ�е�, ���콺
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
	system("cls"); //�ܼ�â clear
	
	cout << "�׸���." << endl;
	
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