# include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	double money;
	cout << "������� �����: "; cin >> money;
	money += 1e-10;	//1*10^-10
	cout << money << endl;
	int grn = money;	//������� �������������� ����� �� 'double' � 'int' � ������� ������
	cout << grn << " ���.\t";
	int cop = (money - grn) * 100;
	cout << cop << " ���.\n";
}