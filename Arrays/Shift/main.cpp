//Shift
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	cout << double() << endl;
	//int() - �������� �� ��������� ��� ���� 'int'
	//double() - �������� �� ��������� ��� ���� 'double'
	const int n = 10;
	int arr[n] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//����� �������:

	//����� ���������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}