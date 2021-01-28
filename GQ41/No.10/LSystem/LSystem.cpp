#include <stdio.h>
#include <string>
using namespace std;

// グローバル変数
string starttext;		// ωの値(初期の文字列)
string drawtext;		// 最終的に出力される文字列

int generation;			// 世代数

// 前方宣言
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
