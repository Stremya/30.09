#include <iostream>
#include <cmath>
using namespace std;

int task1() {  
	int color = 0;
	int color1 = 0;
	int choice = 0;
	setlocale(LC_ALL, "ru");
	cout << "Для чего хотите поменять цвет?\n";
	cout << "1. Шрифт\n";
	cout << "2. Фон\n";
	cin >> choice;
	if (choice == 1) {
		cout << "\t1.\033[31m Красный\033[0m\n" << endl;
		cout << "\t2. \033[32mЗеленый\033[0m\n" << endl;
		cout << "\t3. \033[33mЖелтый\033[0m\n" << endl;
		cout << "\t4. \033[34mСиний\033[0m\n" << endl;
		cout << "\t5.\033[35m Фиолетовый\033[0m\n" << endl;
		cout << "\t6.\033[36m Бирюзовый\033[0m\n" << endl;
		cout << "Выберете цвет шрифта: \n\n";
		cin >> color;
		switch (color) {
		case 1:
			cout << "\n\033[31mВы выбрали красный цвет шрифта\033[0m" << endl;
			break;
		case 2:
			cout << "\n\033[32mВы выбрали зеленый цвет шрифта\033[0m" << endl;
			break;
		case 3:
			cout << "\n\033[33mВы выбрали желтый цвет шрифта\033[0m" << endl;
			break;
		case 4:
			cout << "\n\033[34mВы выбрали синий цвет шрифта\033[0m" << endl;
			break;
		case 5:
			cout << "\n\033[35mВы выбрали фиолетовый цвет шрифта\033[0m" << endl;
			break;
		case 6:
			cout << "\n\033[36mВы выбрали бирюзовый цвет шрифта\033[0m" << endl;
			break;
		default:
			cout << "\n Такого цвета нит" << endl;
		}
		
	}
	else if (choice == 2) {
		cout << "\t1.\033[31m Красный\033[0m\n" << endl;
		cout << "\t2. \033[32mЗеленый\033[0m\n" << endl;
		cout << "\t3. \033[33mЖелтый\033[0m\n" << endl;
		cout << "\t4. \033[34mСиний\033[0m\n" << endl;
		cout << "\t5.\033[35m Фиолетовый\033[0m\n" << endl;
		cout << "\t6.\033[36m Бирюзовый\033[0m\n" << endl;
		cout << "\nВыберете цвет фона: \n\n";
		cin >> color1;
		switch (color1) {
		case 1:
			cout << "\n\033[41mВы выбрали красный цвет фона\033[0m" << endl;
			break;
		case 2:
			cout << "\n\033[42mВы выбрали зеленый цвет фона\033[0m" << endl;
			break;
		case 3:
			cout << "\n\033[43mВы выбрали желтый цвет фона\033[0m" << endl;
			break;
		case 4:
			cout << "\n\033[44mВы выбрали синий цвет фона\033[0m" << endl;
			break;
		case 5:
			cout << "\n\033[45mВы выбрали фиолетовый цвет фона\033[0m" << endl;
			break;
		case 6:
			cout << "\n\033[46mВы выбрали бирюзовый цвет фона\033[0m" << endl;
			break;
		default:
			cout << "\n Такого цвета нит" << endl;
		}
	}
	return 0;
}

int task2() {
	double number = 0;
	double exponent = 0;
	cout << "Введите число, которое хотите возвести в степень: ";
	cin >> number;
	cout << "Введите степень(1 - 7): ";
	cin >> exponent;
	switch(exponent) {
	case 1:
		exponent == 1;
		break;
	case 2:
		exponent == 2;
		break;
	case 3:
		exponent == 3;
		break;
	case 4:
		exponent == 4;
		break;
	case 5:
		exponent == 5;
		break;
	case 6:
		exponent == 6;
		break;
	case 7:
		exponent == 7;
		break;
	default:
		cout << "Больше 7 нельзя" << endl;
		break;
	}
	double a = pow(number, exponent);
	cout << a << endl;
	return 0;
}



int main() {
	int choice = 0;
	setlocale(LC_ALL, "ru");
	cout << "Выберете задание: " << endl;
	cin >> choice;
	if (choice == 1) {
		task1();
	} 
	if (choice == 2) {
		task2();
	}
	else {
		cout << "Такого задания нет";
	}
	
	return 0;
}





