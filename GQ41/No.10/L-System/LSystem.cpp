#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define GENERATION		5	// �����㐔

// �O���[�o���ϐ�
string g_text;				// �\���p������

// �O���錾
void Init();
void Uninit();
void Update();
void Draw();

int main()
{
	Init();

	Update();

	Draw();

	rewind(stdin);
	getchar();

	Uninit();

	return 0;
}

void Init()
{
	g_text = "A";
}

void Uninit()
{

}

void Update()
{
	string temptext;

	// �ꐢ��ڂ̕\��
	Draw();

	// ������
	for (int i = 0; i < GENERATION; i++)
	{
		// ������
		temptext = "";

		// �����S������
		for (int j = 0; j < (int)g_text.size(); j++)
		{
			switch (g_text[j])
			{

			case 'A':
				temptext += "B-A-B";
				break;

			case 'B':
				temptext += "A+B+A";
				break;
			default:
				temptext += g_text[j];
				break;
			}
		}
		// �e�L�X�g�ɏ�������
		g_text = temptext;

		Draw();
	}
}

void Draw()
{
	cout << g_text << endl;
}
