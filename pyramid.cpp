#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//функция распечатки пирамиды
void print_pyramid(int height);
//функция для тестирования
void testing_program();

int main() {
	setlocale(LC_ALL, "ru");
	testing_program();
	return 0;
}

//функция распечатки пирамиды
void print_pyramid(int height) {
	cout << "\n";
	//рассчет отступа для правильного вывода в консоль
	int gap = height + 1;
	//рассчет длины строки
	for (string row = "**"; row.length() <= height * 2; row += "**") {
		cout.width(gap);
		cout << row << endl;
		gap++;
	}
	cout << "\n";
}

//функция для тестирования
void testing_program() {
	int height = -1;

	cout << "Эта программа печатает на экране \"пирамиду\" "
		"заданной высоты.\n";

	while (height) {
		cout << "Введите высоту пирамиды от 1 до 30 "
			"(для завершения программы введите 0): ";
		cin >> height;
		if (height) {
			if (height >= 1 && height <= 30) {
				print_pyramid(height);
			}
			else {
				cout << "\n";
				cout << "Ошибка, введите другое значение в диапазоне от 1 до 30.\n";
			}
		}
		else {
			cout << "\n";
			cout << "Программа завершена";
		}
	}
}

