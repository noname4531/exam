#include <stdio.h>
#include <locale.h>
#include "Header.h"
#include<iostream>
#include<time.h>
#include<string.h>

//enum MyEnum { otr, pol, nul };
void SumProzMassiv(const int *Massiv, int *summ, int *proiz, int len)
{
	for (int i = 0;i< len;i++)
	{
		*summ += *(Massiv + i);
	}
	for (int i = 0;i< len;i++)
	{
		*proiz *= *(Massiv + i);
	}
}

void massivShow(int *Massiv, int len)
{
	for (int i = 0;i< len;i++)
	{
		printf("A[%d]=%d\n", len, *(Massiv + i));
	}

	//зачем я здесь исполбзую безопасную работа, потоучто не обходимо получить сумму и произведение элементов массива без его изменения; 
}
void SumProzMassivMnogomer(int *Massiv, int *summ, int *proiz, int len)
{
	for (int i = 0;i< len;i++)
	{
		for (int j = 0;j<len;j++)
			*summ += *(Massiv + i * 2 + j);
	}
	for (int i = 0;i< len;i++)
	{
		for (int j = 0;j<len;j++)
			*summ += *(Massiv + i * 2 + j);
	}
}

void random(int*Massiv, int len)
{

	for (int i = 0;i< len;i++)
	{
		*(Massiv + i) = 1 + rand() % 10;
	}
}

void MassivInd(int *Start, int*End, MyEnum tp)
{
	int chet = 0;
	int i = 0;
	switch (tp)
	{
	case pol:
	{
		while (Start < End)
		{
			if (*(Start + i) > 0)
				chet++;
			i++;
		}
	}
	break;
	case otr:
	{
		while (Start < End)
		{
			if (*(Start + i) < 0)
				chet++;
			i++;
		}
	}
	break;
	case nul:
	{
		while (Start < End)
		{
			if (*(Start + i) == 0)
				chet++;
			i++;
		}
		printf("Нулевые элементы ");
	}
	break;
	}
}