#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//������� ���������� ��������
void print_pyramid(int height);
//������� ��� ������������
void testing_program();

int main() {
	setlocale(LC_ALL, "ru");
	testing_program();
	return 0;
}

//������� ���������� ��������
void print_pyramid(int height) {
	cout << "\n";
	//������� ������� ��� ����������� ������ � �������
	int gap = height + 1;
	//������� ����� ������
	for (string row = "**"; row.length() <= height * 2; row += "**") {
		cout.width(gap);
		cout << row << endl;
		gap++;
	}
	cout << "\n";
}

//������� ��� ������������
void testing_program() {
	int height = -1;

	cout << "��� ��������� �������� �� ������ \"��������\" "
		"�������� ������.\n";

	while (height) {
		cout << "������� ������ �������� �� 1 �� 30 "
			"(��� ���������� ��������� ������� 0): ";
		cin >> height;
		if (height) {
			if (height >= 1 && height <= 30) {
				print_pyramid(height);
			}
			else {
				cout << "\n";
				cout << "������, ������� ������ �������� � ��������� �� 1 �� 30.\n";
			}
		}
		else {
			cout << "\n";
			cout << "��������� ���������";
		}
	}
}

