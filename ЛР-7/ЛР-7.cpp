#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const string TASK1_DESCRIPT = "Задача 1.\nСреднее гармоническое значение двух чисел получается путем инвертирования этих чисел, вычисления среднего значения инверсий и получения инверсии результата. Напишите функцию, которая принимает два аргумента double и возвращает среднее гармоническое значение этих двух чисел.\n\n";
const string TASK2_DESCRIPT = "Задача 2.\nНапишите и протестируйте функцию, которая принимает в качестве аргументов адреса трех переменных double и помещает наименьшее значение в первую переменную, среднее значение — во вторую, а наибольшее значение — в третью.\n\n";

// Задача 1.
double CalculateAverageGarmonic(double first, double second) {
	return 2 / ((1 / first) + (1 / second));
}

// Задача 2.
void RunTask2(double& d1, double& d2, double& d3) {
	double temp;

	if (d1 > d2)
	{
		temp = d2;
		d2 = d1;
		d1 = temp;
	}

	if (d2 > d3)
	{
		temp = d3;
		d3 = d2;
		d2 = temp;
	}

	if (d1 > d2)
	{
		temp = d2;
		d2 = d1;
		d1 = temp;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "----- ЛР-7 начала выполнение! -----\n\n";
	int userChoice;
	// Главное меню для перехода между задачами.
	do
	{
		cout << "----- Главное меню -----\n";
		cout << "Что вы хотите сделать?\nНа выбор есть 3 варианта:\n";
		cout << "1 - Задача 1\n2 - Задача 2\n0 - Выход\n\nВведите номер вашего выбора: ";
		cin >> userChoice;
		cout << "\n";

		// Объявляем необходимые переменные.
		double task1Number1, task1Number2, task2Number1, task2Number2, task2Number3;
		switch (userChoice)
		{
		case 1:
			cout << TASK1_DESCRIPT;
			cout << "Введите первое число: ";
			cin >> task1Number1;
			cout << "Введите второе число: ";
			cin >> task1Number2;
			cout << "\nСреднее гармоническое чисел " << task1Number1 << " и " << task1Number2 << " равно " << CalculateAverageGarmonic(task1Number1, task1Number2);
			break;
		case 2:
			cout << TASK2_DESCRIPT;
			cout << "Введите первое число: ";
			cin >> task2Number1;
			cout << "Введите второе число: ";
			cin >> task2Number2;
			cout << "Введите третье число: ";
			cin >> task2Number3;
			cout << "\nЧисла в изначальной последовательности:" << setw(20) << task2Number1 << setw(10) << task2Number2 << setw(10) << task2Number3;
			RunTask2(task2Number1, task2Number2, task2Number3);
			cout << "\nЧисла в измененной последовательности: " << setw(20) << task2Number1 << setw(10) << task2Number2 << setw(10) << task2Number3;
			break;
		case 0:
			cout << "Выбран вариант выхода из программы. Программа завершается...\n\n";
			break;
		default:
			cout << "Введен некорректный номер. Пожалуйста, повторите попытку";
			break;
		}

		if (userChoice != 0)
		{
			cout << "\n\n----------------------------------------------------------------------------------------------------\n\n";
		}
	} while (userChoice != 0);

	system("pause");
	return 0;
}
