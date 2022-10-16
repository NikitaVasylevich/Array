#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	//arr[2] = 123;
	//cout << arr[2] << endl;

	//ввод элементов с клавиатуры
	cout << "Введите элементы массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	//вывод элементов в прямом порядке:

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вывод элементов в обратном порядке:

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}

	//Вычисление суммы элементов: 
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое: " << (double)sum / SIZE << endl;
	//cout << sum / SIZE << endl;

	// Поиск минимального и максимального значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;

}
