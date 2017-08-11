#include <iostream>
#include <string>
#include <windows.h>

#include "hahahah.h"

using namespace std;

int main()
{
	string a;
	cout << "模擬面接を行います。準備ができたら[a]を入力してください\n";
	cin >> a;

	if (a == "a")
	{
		cout << "模擬面接を開始します。\n";
		cout << "出身校、クラス、学年、出席番号、お名前を教えてください\n";

		obj.situmon();


		cout << "\n最後に何か質問はありますか\n";
		cout << "\n以上で面接は終了です。お疲れ様でした。\n";
	}

	else cout << "無効なキーです:-(";
	return 0;
}
