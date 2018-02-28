// 2, 3, 4 и 5е задание одинаковое, т.к. srand постоянно заполняет одними и теми же числами... обнуление не помогло)

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Vizov.h"
using namespace std;


void main()
{	
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		task = to(&task);
		switch (task)
		{
			case 1:
			{
				/*1.	Даны два массива, упорядоченных по возрастанию :
				А[n] и B[m].Сформируйте массив C[n + m],
					состоящий из элементов массивов А и В, 
					упорядоченный по возрастанию(Массив С не должен сортироваться).*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				wi(arr2, &size);
				ArrSort(arr, &size);
				ArrSort(arr2, &size);
				cout << "Sortirovka zaverhina " << endl;
				ArrMa(arr, arr2, arr3, &size);
				Arr(arr3, &size);
			} break;

			case 2:
			{
				/*2.	Даны два массива : А[n] и B[m].Необходимо 
				создать третий массив, в котором нужно собрать общие элементы двух массивов.*/
				srand(time(NULL));
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				Arr(arr2, &size);
				cout << "massiv 1 " << endl;
				Arr(arr, &size);
				cout << " massiv 1" << endl;
				Arr(arr2, &size);
				cout << "Sformirovavhiysya massiv 3" << endl;
				ArrMatchingWithoutSave(arr, arr2, arr3, &size);
			} break;

			case 3:
			{
				/*3.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать элементы массива A, которые не включаются в B.*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				wi(arr2, &size);
				cout << "massiv 1" << endl;
				Arr(arr, &size);
				cout << "massiv 2" << endl;
				Arr(arr2, &size);
				cout << "Sformirovavhiysya massiv 3" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;

			case 4:
			{
				//4.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором нужно собрать элементы массива B, которые не включаются в A.
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				wi(arr2, &size);
				cout << "massiv 1" << endl;
				Arr(arr2, &size);
				cout << "massiv 2" << endl;
				Arr(arr2, &size);
				cout << "Sformirovavhiysya massiv 3" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;

			case 5:
			{
				/*5.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, 
				в котором нужно собрать элементы массивов A и B, которые не являются общими для них.*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				wi(arr2, &size);
				cout << "massiv 1" << endl;
				Arr(arr, &size);
				cout << "massiv 2" << endl;
				Arr(arr2, &size);
				cout << "Sformirovavhiysya massiv 3" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;


			/*tut c 1  */
			case 6:
			{
				/*1.	*Напишите функцию, которая 
				принимает одномерный массив целых чисел и заполняет его случайными числами.*/
				int size = SizeOfArr();
				int arr[50];
				wi(arr, &size);
				Arr(arr, &size);
			} break;

			case 7:
			{
				/*2.	*Напишите функцию, которая принимает 
				число и возвращает истину, если число четное и ложь, если нечетное.*/
				srand(time(NULL));
				int n = -10 + rand() % 20;
				cout << "Chislo n = " << n << endl;
				if (TrueFalse(&n) == 1)
					cout << "True" << endl;
				else
					cout << "False " << endl;
			} break;

			case 8:
			{
				/*3.	**Написать функцию, которая возвращает истину, если переданное число простое, и ложь,
				если не простое.Простое число – это число, которое делиться ТОЛЬКО на 1 и на себя(2, 5, 7, 11 и т.д.).*/
				srand(time(NULL));
				int n = -10 + rand() % 20;
				cout << "Chislo n = " << n << endl;
				if (TrueFalse(&n, 0) == 1)
					cout << "True" << endl;
				else
					cout << "False " << endl;
			} break;

			case 9:
			{	
				/*Число называется совершенным, если сумма всех 
				его делителей равна ему самому.Напишите функцию поиска таких чисел во введенном интервале.*/
				srand(time(NULL));
				int n = 10 + rand() % 100;
				cout << "n = " << n << endl;
				if(PerfectNumber(&n) == 1)
					cout << "Soverheno chislo " << endl;
				else
					cout << "ne soverheno chislo" << endl;
			} break;

			

			case 10:
			{
				/*Написать функцию, которая принимает одномерный массив
				целых чисел и возвращает значения максимального числа в этом массиве*/
				int arr[50], size = SizeOfArr();
				wi(arr, &size);
				Arr(arr, &size);
				cout << "Max chislo - " << MaxArr(arr, &size) << endl;
			} break;

			case 11:
			{
				/*Напишите функцию, которая принимает три массива целых чисел.
				Выполнить поэлементное сложение элементов первых двух массивов, и результат занести в третий массив.*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				wi(arr, &size);
				wi(arr2, &size);
				cout << "Massiv 1 " << endl;
				Arr(arr, &size);
				cout << "Massiv 2" << endl;
				Arr(arr2, &size);
				cout << "Summa massivov =" << endl;
				ArrSum(arr, arr2, arr3, &size);
				Arr(arr3, &size);
			} break;

			case 12:
			{
				/*Написать функцию, которая принимает целое шестизначное число и проверяет 
					равна ли сумма первых трех цифр сумме последних трех цифр(счастливый билет).
					Функция возвращает истину, если число счастливое(суммы равны) и ложь, если не счастливое(суммы не равны).*/
				srand(time(NULL));
				int n = 100000 + rand() % 899999;
				cout << n << endl;
				if (HappyNumb(&n) == 1)
					cout << "Xorohee chislo" << endl;
				else
					cout << "Ne povezlo " << endl;
			} break;
		}

	} while (task > 0);
	
}