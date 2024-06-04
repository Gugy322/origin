#include <iostream>
using namespace std;
int main() 
{
	setlocale(0,"");
	
	cout << "[1]Январь\n";
	cout << "[2]Февраль\n";
	cout << "[3]Март\n";
	cout << "[4]Апрель\n";
	cout << "[5]Май\n";
	cout << "[6]Июнь\n";
	cout << "[7]Июль\n";
	cout << "[8]Август\n";
	cout << "[9]Сентябрь\n";
	cout << "[10]Октябрьь\n";
	cout << "[11]Ноябрь\n";
	cout << "[12]Декаборь\n";

	int answerMonth; 

	cin >> answerMonth;

	cout << "Введите номер\n";

	

	switch (answerMonth) {
	case 1:
			cout << "Выбран Месяц Январь\n";
			break;
	}

	switch (answerMonth) {
	case 2:
		cout << "Выбран Месяц Февраль\n";
		break;
	}

	switch (answerMonth) {
	case 3:
		cout << "Выбран Месяц Март\n";
		break;
	}

	switch (answerMonth) {
	case 4:
		cout << "Выбран Месяц Апрель\n";
		break;
	}

	switch (answerMonth) {
	case 5:
		cout << "Выбран Месяц Май\n";
		break;
	}

	switch (answerMonth) {
	case 6:
		cout << "Выбран Месяц Июнь\n";
		break;
	}

	switch (answerMonth) {
	case 7:
		cout << "Выбран Месяц Июль\n";
		break;
	}

	switch (answerMonth) {
	case 8:
		cout << "Выбран Месяц Август\n";
		break;
	}
	switch (answerMonth) {
	case 9:
		cout << "Выбран Месяц Сентябрь\n";
		break;
	}
	switch (answerMonth) {
	case 10:
		cout << "Выбран Месяц Октябрь\n";
		break;
	}

	switch (answerMonth) {
	case 11:
		cout << "Выбран Месяц Ноябрь\n";
		break;
	}
	switch (answerMonth) {
	case 12:
		cout << "Выбран Месяц Декабрь\n";
		break;
	default:
		cout << "Нет такого пункта\n";
	}




}