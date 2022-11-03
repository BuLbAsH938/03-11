#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*1 задача
	int how[5];
	for (int i = 0; i < 5; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << how[i] << " ";
	}
	2 Задача
	int how[5];
	for (int i = 0; i < 5; i++) {
		cin >> how[i];
	}
	for (int i = 4; i >= 0; i--) {
		cout << how[i] << " ";
	}
	3 задача
		int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i+=2) {

			cout << how[i] << " ";

	}
 Сам 1. Массив из 10 целых чисел заполнить положительными и отрицательными числами.
 Подсчитать количество положительных элементов
	int O = 0;
	int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i++) {
		if (how[i] > 0) {
			O++;
		}

	cout << O;
	Сам 2. Массив из 10 целых чисел заполнить числами. Подсчитать кол-во четных и нечетных элементов
	int O = 0, y = 0;
	int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i++) {
		if (how[i] % 2 == 0) {
			O++;
		}
		if (how[i] % 2 > 0) {
			y++;
		}
	}
	cout << O << " " << y;
	Сам 3. Массив из 10 целых чисел заполнить числами. Подсчитать cумму тех элементов всех чисел которые не делятся на 3 
	int O = 0;
	int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i++) {
		if (how[i] % 3 != 0) {
			O += how[i];
		}
	}
	cout << O;
	Сам 4. Массив из 10 целых чисел заполнить числами. Подсчитать произведение тех элементов всех чисел которые  делятся на 3 или не делятся на 5
	int O = 1;
	int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i++) {
		if (how[i] % 3 == 0 || how[i] % 5 != 0) {
			O *= how[i];
		}
	}
	cout << O;
	Сам 5. Массив из 10 целых чисел заполнить числами. Подсчитать среднее арифметическое тех элементов у которых нечетные индексы
	double O = 0, h = 0;
	int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0 ) {
			O += how[i];
			h++;
		}
	}
	cout << O / h;*/
}