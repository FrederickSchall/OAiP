/* ������� ������ �����������
���� 1-8
������������ ������ �1
������� 13
��������� ������� ������� � �������� � �������� � �����������
*/


#include <stdio.h>
#include <cstdlib> // ��� ������ � �������� system ()
#include <windows.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float C, K = 273.15, F, i = 1.8, y = 32; // ���������� ����������
	printf_s("������� ������� ������� => "); // ��������� ��� �����
	int x;
	do
	{
		x = scanf_s("%f", &C); // ���� �������� �������
	if (!x)
	{
		printf_s("������: ������� ����� ");
		while (getchar() != '\n');

	}
	else
	{
		K = C + K; // ������� ���������� ���������
		printf_s("��������� � ��������� : %f \n", K); // ����� ����������
		F = i * C + y; // ������� ����������  ��������� � ���������
		printf_s("��������� � ��������� : %f \n", F);
	}
	}while (x != 1);
	system("pause");
	return 0;
}