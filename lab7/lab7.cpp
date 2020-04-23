// lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

string s;
int i = 0;

int parse_op(int a, int b, char op)
{
	int answer = 0;
	switch (op)
	{
	case '+':
		answer = a + b;
		break;
	case '-':
		answer = a - b;
		break;
	case '*':
		answer = a * b;
		break;
	case '/':
		answer = a / b;
		break;
	}
	return answer;
}

int parse_number()
{
	int r = 0;
	while (isdigit(s[i]))
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return r;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите выражение:";
	cin >> s;
	int answer = 0;
	int n1 = parse_number();
	char op1 = s[i++];
	int n2 = parse_number();
	cout << n1 << "\n";
	cout << op1 << "\n";
	cout << n2 << "\n";
	answer = parse_op(n1, n2, op1);
	if (s[i])
	{
		char op2 = s[i++];
		int n3 = parse_number();
		cout << op2 << "\n";
		cout << n3 << "\n";
		answer = parse_op(answer, n3, op2);
	}
	cout << "Ответ:" << answer;
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
