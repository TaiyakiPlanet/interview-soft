#include <iostream>

using namespace std;

inline int Dice()
{
	return rand() % 6 + 1;
}

int main()
{
	int i;

	for (i = 0; i < 20; i++)
		cout << Dice() + Dice() << ' ';//��
	cout << flush;

	return 0;
}