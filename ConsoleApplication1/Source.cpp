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
		printf("������� ����� �������\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			// 22.	�������� �������, ������� �������� ��������� �� ������ � ��� ������, � ���������� ����� � ������������ ��� ��������� � ���� ���������� - �������.
			int Massiv[2] = { 1,2 };
			int sum = 0;
			int proiz = 1;
			SumProzMassiv(Massiv, &sum, &proiz, 2);
			printf("����� = %d, ������������ = %d\n", sum, proiz);
		}
		break;
		case 2:
		{
			/*
			23.	����� �� ������� ��� � � 22 ������� �������� ��� ������������ ������� (�������� � 2 �������: 1. ���������� �������; 2 ��-����������� ���������� �� �������)
			a.	���� int
			b.	���� double
			c.	���� Shor int
			*/
			int t[2][2] = { { 1,1 },{ 1,1 } };
			void(*fptr)(int *, int *, int *, int) = NULL;
			int sum = 0;
			int proiz = 1;
			fptr = SumProzMassivMnogomer;
			fptr(&t[0][0], &sum, &proiz, 2);
			printf("����� = %d, ������������ = %d\n", sum, proiz);

		}
		break;
		case 3:
		{
			/*25.	�������� �������, ������� �������� ��������� �� ������ � ��� ������
			(������ ��� ���� �� ���������� ��� �����, � ���������� ��� ������ �� ��������� ������� �������),
			� ���������� ���������� �������������, ������������� � ������� ��������� ���-����, ��������� �������� ������.
			� ������ ������� ����������� ���������� ������������ enum. (enum ������ ���� �������-��� �� ��� �����, �������� ��� ��� ����� ������� �� �������� ��� �����)*/
			int Massiv[10];
			random(Massiv, 10);

		}
		break;

		}
		printf("������ ���������� ��������� �������\n");
		scanf("%c", &f);
	} while (f == 'y');

}