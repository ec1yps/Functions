#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"
#include "Shifts.h"

#define I_ARR
#define D_ARR
#define C_ARR
#define I_ARR_2
#define D_ARR_2
#define C_ARR_2

void main()
{
	setlocale(LC_ALL, "");
	int number_of_shifts;

#ifdef I_ARR
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	cout << delimiter << endl;
#endif // I_ARR

#ifdef D_ARR
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << delimiter << endl;
#endif // D_ARR

#ifdef C_ARR
	const int C_SIZE = 8;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, C_SIZE) << endl;
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << delimiter << endl;
#endif // C_ARR

#ifdef I_ARR_2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
#endif // I_ARR_2

#ifdef D_ARR_2
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << delimiter << endl;
#endif // D_ARR_2

#ifdef C_ARR_2
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << delimiter << endl;
#endif // C_ARR_2
}