/*
������ ������ �����������
���� 1-8
������� � 5
�������:
�������� ���������, ������� ��������� ������������ ���� ������������� ��������� �������. ������ � ��� ����� �������� �������������
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <conio.h> 
#include <windows.h> 


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ����� ������� ");
	int array;
	scanf_s("%d", &array);
	int a[100];

	int proizved = 1;
	for (int i = 0; i < array; i++) {
		printf_s("������� ������� ������� >> ");
		int check;
		check = scanf("%d", &a[i]);
		if (check == 0) {
			printf_s("������, �������� ������� ������ ���� ����� ������ ");
			a[i] = 0;
		}

		if (a[i] < 0 && check != 0) {
			proizved = proizved* a[i];
		}
	}
	printf_s("������������ ������������� ��������� ������� %d", proizved);
	_getch();
	return 0;
}