#include <iostream>
#include <FillRand.h>
#include <Print.h>
#include <Sort.h>
#include <Statistics.h>
#include <Shift.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ������� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ ������� �������: " << maxValueIn(arr, n) << endl;
	int number_of_shifts;
	cout << "������� ���������� ������� �����: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "������� ���������� ������� ������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
}