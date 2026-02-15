#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int number;
	int k;

	cout << "Введите число: ";
	cin >> number;

	cout << "Введите количество сдвигов:";
	cin >> k;

	int leftt = number << k;
	int rightt = number >> k;

	cout << "Результат сдвига влево: " << leftt << endl;
	cout << "Результат сдвига вправо: " << rightt << endl;

	return 0;

}
