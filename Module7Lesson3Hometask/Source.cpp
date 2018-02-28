// 2, 3, 4 � 5� ������� ����������, �.�. srand ��������� ��������� ������ � ���� �� �������... ��������� �� �������)

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
				/*1.	���� ��� �������, ������������� �� ����������� :
				�[n] � B[m].����������� ������ C[n + m],
					��������� �� ��������� �������� � � �, 
					������������� �� �����������(������ � �� ������ �������������).*/
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
				/*2.	���� ��� ������� : �[n] � B[m].���������� 
				������� ������ ������, � ������� ����� ������� ����� �������� ���� ��������.*/
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
				/*3.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� �������� ������� A, ������� �� ���������� � B.*/
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
				//4.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� �������� ������� B, ������� �� ���������� � A.
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
				/*5.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, 
				� ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.*/
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
				/*1.	*�������� �������, ������� 
				��������� ���������� ������ ����� ����� � ��������� ��� ���������� �������.*/
				int size = SizeOfArr();
				int arr[50];
				wi(arr, &size);
				Arr(arr, &size);
			} break;

			case 7:
			{
				/*2.	*�������� �������, ������� ��������� 
				����� � ���������� ������, ���� ����� ������ � ����, ���� ��������.*/
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
				/*3.	**�������� �������, ������� ���������� ������, ���� ���������� ����� �������, � ����,
				���� �� �������.������� ����� � ��� �����, ������� �������� ������ �� 1 � �� ����(2, 5, 7, 11 � �.�.).*/
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
				/*����� ���������� �����������, ���� ����� ���� 
				��� ��������� ����� ��� ������.�������� ������� ������ ����� ����� �� ��������� ���������.*/
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
				/*�������� �������, ������� ��������� ���������� ������
				����� ����� � ���������� �������� ������������� ����� � ���� �������*/
				int arr[50], size = SizeOfArr();
				wi(arr, &size);
				Arr(arr, &size);
				cout << "Max chislo - " << MaxArr(arr, &size) << endl;
			} break;

			case 11:
			{
				/*�������� �������, ������� ��������� ��� ������� ����� �����.
				��������� ������������ �������� ��������� ������ ���� ��������, � ��������� ������� � ������ ������.*/
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
				/*�������� �������, ������� ��������� ����� ������������ ����� � ��������� 
					����� �� ����� ������ ���� ���� ����� ��������� ���� ����(���������� �����).
					������� ���������� ������, ���� ����� ����������(����� �����) � ����, ���� �� ����������(����� �� �����).*/
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