/*
�� �������� � 1 �� ������ � ����� �/�++.

������� 1:
�������� �������, ��� ������� ����� � � ������ y
*/
#include <iostream>
#include "windows.h";

using namespace std;

int fun(int x, int y)
{
	if (y == 1) return x;
	return x * fun(x, y - 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;
	// ������ ���������� �������
	while (true)
	{
		cout << "Input x y:" << endl;
		cin >> x >> y;
		cout << endl;
		cout << "x to the power of y = " << fun(x, y) << endl;

		system("pause");
		system("cls");
	}

	return 0;
}
