﻿//Constants
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int speed = 0;				//переменное значение
	const int MAX_SPEED = 250;	//постоянное значение
	speed = 80;
	//MAX_SPEED = 280;
	5;	//числовая константа типа 'int'
	5u;	//числовая константа типа 'unsigned int'
	5l;	//числовая константа типа 'long'
	5ul;	//числовая константа типа 'unsigned long'
	5ll;	//числовая константа типа 'long long'
	5ull;	//числовая константа типа 'unsigned long long'
	5.;		//числовая константа типа 'double'
	.5;		//числовая константа типа 'double'
	5e-1;	//числовая константа типа 'double'
	cout << sizeof(5) << endl;
	cout << typeid(5.).name() << endl;
	cout << typeid(.5f).name() << endl;
	cout << typeid(5e-1f).name() << endl;
	//typeid(value).name();
	//value - это значение.
	//RTTI - RunTime Type Information.

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof("Hello") << endl;

	//Числовые, символьные и строковые константы еще называют литералами.
	//Литералы - это елементы кода, которые воспринимаются как есть.
}