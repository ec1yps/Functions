#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 3;
const int COLS = 4;

#define tab "\t"
#define delimiter "\n-------------------------------------------------------------\n"

#define I_ARR
#define D_ARR
#define C_ARR
#define I_ARR_2
#define D_ARR_2
#define C_ARR_2

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Print(T arr[], const int n);
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(T arr[], const int n);
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(T arr[], const int n);
template<typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T maxValueIn(T arr[], const int n);
template<typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}

template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T> double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
}

template<typename T> T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template<typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

template<typename T> T maxValueIn(T arr[], const int n)
{
	T max = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	int a = ROWS, b = COLS;
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 1; k < COLS; k++)
			{
				if (j > 0 && k - 1 == 0) arr[j - 1][b - 1] = arr[j][0];
				arr[j][k - 1] = arr[j][k];
			}
		}
		arr[a - 1][b - 1] = buffer;
	}
}

template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
template<typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}