include <iostream>
#include <string>

using namespace std;

class ����
{
public:
	string sibo = "\n���Ђ��u�]�������R�͂Ȃ�ł���\n";
	string san = "\n�O�N�Ԋ撣�������Ƃ͂Ȃ�ł���\n";
	string news = "\n�ŋ߂̃j���[�X�Ŋ֐S�̂�����̂͂���܂����H\n";
	string scho = "\n�Z���搶�̖��O�͂Ȃ�ł���\n";
	string cho = "\n���Ȃ��̒����͂ǂ�ȂƂ���ł���\n";
	string tan = "\n�ł͂��Ȃ��̒Z���͂ǂ�ȂƂ���ł���\n";
	string toku = "\n���Ȃ��̊w�Z�ɂ��ċ����Ă�������\n";
	void chotan();
	void situmon();
}obj;

void ����::chotan()//class�Ɗ֘A�t�����Ȃ���cho�͎g���Ȃ�
{
	cout << cho;
	Sleep(20000);
	cout << tan;
	Sleep(20000);
}


void ����::situmon()
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

