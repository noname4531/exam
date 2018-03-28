#include <stdio.h>
#include <locale.h>
#include "Header.h"
#include<iostream>
#include<time.h>
#include<string.h>

using namespace std;
char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");

	do
	{
		int N;
		printf("Введите номер задания\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			// 22.	Написать функцию, которая получает указатель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах - ссылках.
			int Massiv[2] = { 1,2 };
			int sum = 0;
			int proiz = 1;
			SumProzMassiv(Massiv, &sum, &proiz, 2);
			printf("сумма = %d, произведение = %d\n", sum, proiz);
		}
		break;
		case 2:
		{
			/*
			23.	Такую же функцию как и в 22 задании написать для многомерного массива (подумать в 2 стороны: 1. Перегрузка функций; 2 Ис-пользование указетелей на функйии)
			a.	Типа int
			b.	Типа double
			c.	Типа Shor int
			*/
			int t[2][2] = { { 1,1 },{ 1,1 } };
			void(*fptr)(int *, int *, int *, int) = NULL;
			int sum = 0;
			int proiz = 1;
			fptr = SumProzMassivMnogomer;
			fptr(&t[0][0], &sum, &proiz, 2);
			printf("сумма = %d, произведение = %d\n", sum, proiz);

		}
		break;
		case 3:
		{
			/*25.	Написать функцию, которая получает указатель на массив и его размер
			(зармер при этом не передавать как число, а передавать как ссылку на последний элемент массива),
			и возвращает количество отрицательных, положительных и нулевых элементов мас-сива, используя механизм ссылок.
			В данном задании обязательно необходимо использовать enum. (enum должен быть глобаль-ным на все файлы, подумать как это можно сделать не объявляя его везде)*/
			int Massiv[10];
			random(Massiv, 10);

		}
		break;

		}
		printf("Хотите продолжить проверять задания\n");
		scanf("%c", &f);
	} while (f == 'y');

}