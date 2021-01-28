#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#define GENERATION		5	// 世代交代数

// グローバル変数
string g_text;				// 表示用文字列

// 前方宣言
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

	// 一世代目の表示
	Draw();

	// 世代交代
	for (int i = 0; i < GENERATION; i++)
	{
		// 初期化
		temptext = "";

		// 文字全件検索
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
		// テキストに書き込み
		g_text = temptext;

		Draw();
	}
}

void Draw()
{
	cout << g_text << endl;
}
