#include <stdio.h>
#include <string>
using namespace std;

// �O���[�o���ϐ�
string g_v;		// V�̒l(�o�͂���镶����)
string g_s;		// S�̒l(�v�Z���i��ł��ω����Ȃ��萔�̏W��)
string g_w;		// �ւ̒l(�����̕�����)
string g_p;		// P�̒l(V ��ω������Ă䂭�u���K���̏W��)

// �O���錾
void Init();
void Uninit();

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
	g_s = "A";
}

void Uninit()
{
}
