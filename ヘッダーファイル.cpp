include <iostream>
#include <string>

using namespace std;

class 質問
{
public:
	string sibo = "\n当社を志望した理由はなんですか\n";
	string san = "\n三年間頑張ったことはなんですか\n";
	string news = "\n最近のニュースで関心のあるものはありますか？\n";
	string scho = "\n校長先生の名前はなんですか\n";
	string cho = "\nあなたの長所はどんなところですか\n";
	string tan = "\nではあなたの短所はどんなところですか\n";
	string toku = "\nあなたの学校について教えてください\n";
	void chotan();
	void situmon();
}obj;

void 質問::chotan()//classと関連付けしないとchoは使えない
{
	cout << cho;
	Sleep(20000);
	cout << tan;
	Sleep(20000);
}


void 質問::situmon()
{
	cout << sibo;
	Sleep(60000);
	cout << san;
	Sleep(60000);
	cout << news;
	Sleep(60000);
	cout << scho;
	Sleep(10000);
	obj.chotan();
};

