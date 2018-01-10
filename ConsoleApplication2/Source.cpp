#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");

	int b = 0;

	cout << "введите номер задания" << endl;
	cin >> b;
	if (b == 1)
	{
		/*1.	Заполнить массив из восьми элементов следующими значениями:
		первый элемент массива равен 37, второй — 0, третий — 50,
		четвертый — 46, пятый — 34, шестой — 46, седьмой — 0, восьмой —13.
		*/

		int arr[8] = { 37,0,50,46,34,46,0,13 };
		for (int i = 0; i <= 7; i++)
		{

			cout << arr[i] << endl;

		}
	}

	else if (b == 2)
	{
		/*
		2.	Заполнить массив из десяти элементов значениями, вводимыми с клавиатуры в ходе выполнения программы
		*/
		int arr[10];
		//arr[2] = 56;

		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < 10; i++)
		{

			cout << arr[i] << endl;
		}
	}

	else if (b == 3)
	{
		/*3.	Массив предназначен для хранения значений ростов двенадцати человек.
		С помощью датчика случайных чисел заполнить массив целыми
		значениями, лежащими в диапазоне от 163 до 190 включительно

		*/

		int arr[12];
		srand(time(NULL));
		int r = 1 + rand() % 10;

		for (int i = 0; i < 12; i++)
		{
			cin >> arr[i];
		}

	}

	else if (b == 4)
	{
		/*
		4.	Составить программу вывода на экран
		любого элемента массива по его индексу

		*/
		int arr[10];
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			arr[i] = 2155 + rand() % 15458454;
		}
		int element = 0;
		cout << "введите любой элемент массива " << endl;
		cin >> element;


		cout << arr[element] << endl;
	}

	else if (b == 5)
	{
		/*
		5.	Вывести элементы массива на экран в обратном порядке


		*/

		int arr[5];
		srand(time(NULL));

		for (int i = 0; i < 5; i++)
		{
			arr[i] = 1 + rand() % 5;
		}

		for (int i = 4; i > 0; i--)
		{
			cout << arr[i] << endl;
		}
	}

	else if (b == 6)
	{
		/*
		6.	Дан массив. Составить программу:
		a.	расчета квадратного корня из любого элемента массива;
		b.	расчета среднего арифметического двух любых элементов массива

		*/

		int arr[4];
		srand(time(NULL));
		for (int i = 0; i < 4; i++)
		{
			arr[i] = 1466 + rand() % 58990;
		}
		int element = 0, element0 = 0;

		cout << "введите элемент массива" << endl;
		cin >> element;

		cout << arr[element] << endl;
		cout << pow(arr[element], 2) << endl;

		cout << "введите 2 любых элемента масива: ";
		cin >> element >> element0;

		int SReD = 0;
		SReD = (arr[element] + arr[element0]) / 2;
		cout << SReD << endl;

	}

	else if (b == 7) {

		/*
		7.	Дан массив. Все его элементы:
		a.	увеличить в 2 раза;
		b.	уменьшить на число А;
		c.	разделить на первый элемент

		*/
		int arr[5];
		srand(time(NULL));
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 1233 + rand() % 56756;
			arr[i] = arr[i] * 2;
			cout << arr[i] << endl;
		}
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 3434 + rand() % 676763;
			arr[i] = arr[i] - 5;
			cout << arr[i] << endl;
		}


		for (int i = 0; i < 5; i++)
		{
			arr[i] = 34534 + rand() % 67453;
			arr[i] = arr[i] / arr[1];
			cout << arr[i] << endl;
		}
	}

	else if (b == 8) {
		/*8.	В массиве хранятся сведения о стоимости 12 различных предметов.
		Определить общую стоимость всех предметов

		*/
		int arr[12];
		int summ = 0;
		srand(time(NULL));
		for (int i = 0; i < 12; i++)
		{
			arr[i] = 10 + rand() % 20;
			summ = summ + arr[i];
		}
		cout << summ << endl;
	}

	else if (b == 9)
	{
		/*9.	В массиве хранятся сведения о количестве осадков,
		выпавших за каждый день февраля.
		Определить среднедневное количество осадков в этом месяце
		*/
		int arr[28]; int summ = 0;
		srand(time(NULL));
		for (int i = 0; i < 28; i++) {
			int r = -30 + rand() % 30;
			arr[i] = r;
			summ = summ + arr[i];
			cout << arr[i] << endl;

		}

		cout << endl << summ / 28 << endl;
	}
	else if (b == 10)
	{
		/*
		10.	В массиве хранится информация о массе каждого из 30 предметов,
		загружаемых в грузовой автомобиль, грузоподъемность которого известна.
		Определить, не превышает ли общая масса всех предметов грузоподъемность автомобиля
		*/
		int arr[30]; int summ = 0;
		srand(time(NULL));
		for (int i = 0; i < 30; i++)
		{
			int r = 50 + rand() % 100;
			arr[i] = r;
			summ = summ + arr[i];
			cout << arr[i] << endl;
		}

		if (summ > 3000)
		{
			cout << "грузоподъемность превышает  " << endl;
		}
		else {
			cout << "грузоподъемность не превышает  " << endl;
		}

	}
	else if (b == 11) {
		/*11.	Дан массив. Напечатать:
		a.	все неотрицательные элементы;
		b.	все элементы, не превышающие число 100.
		c.	все четные элементы
		*/
		int arr[25];
		srand(time(NULL));
		int r = 0;

		for (int i = 0; i < 25; i++) {
			r = -1000 + rand() % 100;
			arr[i] = r;
		}

		for (int i = 0; i < 25; i++)
		{
			if (arr[i] > 0) {
				cout << "неотрицательные элементы" << arr[i] << endl;
			}

		}

		for (int i = 0; i < 25; i++)
		{
			if (arr[i] < 100) {
				cout << "элементы,не превышающие число 100 " << arr[i] << endl;
			}

		}

		for (int i = 0; i < 25; i++)
		{
			if (arr[i] % 2 == 0) {
				cout << "четные элементы" << arr[i] << endl;
			}

		}

	}
	else if (b == 12)
	{
		/*12.	Дан массив. Вывести на экран сначала его элементы,
		стоящие на четных местах, затем — на нечетных
		*/

		int arr[15];
		srand(time(NULL));
		int r = 0;

		for (int i = 0; i < 15; i++)
		{
			r = -1000 + rand() % 100;
			arr[i] = r;
			cout << arr[i] << endl;
		}
		for (int i = 0; i < 15; i++)
		{
			if (i % 2 == 0) {
				cout << "четные элементы" << arr[i] << endl;
			}
		}
		for (int i = 0; i < 14; i++)
		{
			if (!i % 2 == 0) {
				cout << "нечетные элементы" << arr[i] << endl;
			}
	}