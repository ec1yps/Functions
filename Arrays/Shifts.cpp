#include "Shifts.h"

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
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
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
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

template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}