#include <stdio.h>
#include <string>
using namespace std;

// �O���[�o���ϐ�
string starttext;		// �ւ̒l(�����̕�����)
string drawtext;		// �ŏI�I�ɏo�͂���镶����

int generation;			// ���㐔

// �O���錾
void Init();
void Uninit();
void Update();
void Draw();

int main()
{
	Init();


	rewind(stdin);
	getchar();

	Uninit();

	return 0;
}

void Init()
{
	
}

void Uninit()
{
}

void Update()
{

}

void Draw()
{

}
