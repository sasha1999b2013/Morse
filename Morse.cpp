// Morse.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;
//перевод текста в азбуку морзе
void convert(string a)
{
	//std::cout << a.size() << std::endl;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == ' ')
			cout << endl;
		else if (a[i] == '0')
			cout << "-----" << endl;
		else if (a[i] == '1')
			cout << ".----" << endl;
		else if (a[i] == '2')
			cout << "..---" << endl;
		else if (a[i] == '3')
			cout << "...--" << endl;
		else if (a[i] == '4')
			cout << "....-" << endl;
		else if (a[i] == '5')
			cout << "....." << endl;
		else if (a[i] == '6')
			cout << "-...." << endl;
		else if (a[i] == '7')
			cout << "--..." << endl;
		else if (a[i] == '8')
			cout << "---.." << endl;
		else if (a[i] == '9')
			cout << "----." << endl;
		else if (a[i] == 'A' || a[i] == 'a')
			cout << ".-" << endl;
		else if (a[i] == 'B' || a[i] == 'b')
			cout << "-..." << endl;
		else if (a[i] == 'C' || a[i] == 'c')
			cout << "-.-." << endl;
		else if (a[i] == 'D' || a[i] == 'd')
			cout << "-.." << endl;
		else if (a[i] == 'E' || a[i] == 'e')
			cout << "." << endl;
		else if (a[i] == 'F' || a[i] == 'f')
			cout << "..-." << endl;
		else if (a[i] == 'G' || a[i] == 'g')
			cout << "--." << endl;
		else if (a[i] == 'H' || a[i] == 'h')
			cout << "...." << endl;
		else if (a[i] == 'I' || a[i] == 'i')
			cout << ".." << endl;
		else if (a[i] == 'J' || a[i] == 'j')
			cout << ".---" << endl;
		else if (a[i] == 'K' || a[i] == 'k')
			cout << "-.-" << endl;
		else if (a[i] == 'L' || a[i] == 'l')
			cout << ".-.." << endl;
		else if (a[i] == 'M' || a[i] == 'm')
			cout << "--" << endl;
		else if (a[i] == 'N' || a[i] == 'n')
			cout << "-." << endl;
		else if (a[i] == 'O' || a[i] == 'o')
			cout << "---" << endl;
		else if (a[i] == 'P' || a[i] == 'p')
			cout << ".--." << endl;
		else if (a[i] == 'Q' || a[i] == 'q')
			cout << "--.-" << endl;
		else if (a[i] == 'R' || a[i] == 'r')
			cout << ".-." << endl;
		else if (a[i] == 'S' || a[i] == 's')
			cout << "..." << endl;
		else if (a[i] == 'T' || a[i] == 't')
			cout << "-" << endl;
		else if (a[i] == 'U' || a[i] == 'u')
			cout << "..-" << endl;
		else if (a[i] == 'V' || a[i] == 'v')
			cout << "...-" << endl;
		else if (a[i] == 'W' || a[i] == 'w')
			cout << ".--" << endl;
		else if (a[i] == 'X' || a[i] == 'x')
			cout << "-..-" << endl;
		else if (a[i] == 'Y' || a[i] == 'y')
			cout << "-.--" << endl;
		else if (a[i] == 'Z' || a[i] == 'z')
			cout << "--.." << endl;
		else
		{
			cout << "?" << endl;
		}
	}
	cout << endl;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	char a;
	cout << "1 - ввод с клавиатуры" << endl;
	cout << "2 - ввод из файла" << endl;
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		cout << "введите текст" << endl;
		getline(cin, s);
		convert(s);
	}
	else {
		ifstream fin("st.txt");
		while (fin >> a)
			s += a;
		fin.close();
		convert(s);
	}
	system("pause");
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
