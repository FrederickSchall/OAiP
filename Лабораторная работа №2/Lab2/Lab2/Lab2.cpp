/*
Кошелв Максим Анатольевич
КТбо 1-8
Вариант № 5
Задание:
Написать программу, которая вычисляет произведение всех отрицательных элементов массива. Массив и его длина вводятся пользователем
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <conio.h> 
#include <windows.h> 


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введите длину массива ");
	int array;
	scanf_s("%d", &array);
	int a[100];

	int proizved = 1;
	for (int i = 0; i < array; i++) {
		printf_s("Введите элемент массива >> ");
		int check;
		check = scanf("%d", &a[i]);
		if (check == 0) {
			printf_s("Ошибка, элементм массива должен быть целым числом ");
			a[i] = 0;
		}

		if (a[i] < 0 && check != 0) {
			proizved = proizved* a[i];
		}
	}
	printf_s("Произведение отрицательных элементов массива %d", proizved);
	_getch();
	return 0;
}