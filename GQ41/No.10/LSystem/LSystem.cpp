#include <stdio.h>
#include <string>
using namespace std;

// グローバル変数
string g_v;		// Vの値(出力される文字列)
string g_s;		// Sの値(計算が進んでも変化しない定数の集合)
string g_w;		// ωの値(初期の文字列)
string g_p;		// Pの値(V を変化させてゆく置換規則の集合)

// 前方宣言
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
