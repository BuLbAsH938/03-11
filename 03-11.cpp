#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*1 ������
	int how[5];
	for (int i = 0; i < 5; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << how[i] << " ";
	}
	2 ������
	int how[5];
	for (int i = 0; i < 5; i++) {
		cin >> how[i];
	}
	for (int i = 4; i >= 0; i--) {
		cout << how[i] << " ";
	}
	3 ������
		int how[10];
	for (int i = 0; i < 10; i++) {
		cin >> how[i];
	}
	for (int i = 0; i < 10; i+=2) {

			cout << how[i] << " ";

	}
 ��� 1. ������ �� 10 ����� ����� ��������� �������������� � �������������� �������.
 ���������� ���������� ������������� ���������
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
	��� 2. ������ �� 10 ����� ����� ��������� �������. ���������� ���-�� ������ � �������� ���������
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
	��� 3. ������ �� 10 ����� ����� ��������� �������. ���������� c���� ��� ��������� ���� ����� ������� �� ������� �� 3 
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
	��� 4. ������ �� 10 ����� ����� ��������� �������. ���������� ������������ ��� ��������� ���� ����� �������  ������� �� 3 ��� �� ������� �� 5
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
	��� 5. ������ �� 10 ����� ����� ��������� �������. ���������� ������� �������������� ��� ��������� � ������� �������� �������
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