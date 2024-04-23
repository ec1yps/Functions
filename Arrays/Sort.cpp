#include "Sort.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	/*int a = 0, b = 0;
	for (int i = 0; i < ROWS*COLS;i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (arr[a][b] < arr[j][k])
				{
					int buffer = arr[a][b];
					arr[a][b] = arr[j][k];
					arr[j][k] = buffer;
				}
			}
		}
		if (b == COLS - 1)
		{
			a += 1;
			b = 0;
		}
		else b += 1;
	}*/
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				/*if (k == i)
				{
					for (int l = j + 1; l < COLS; l++)
					{
						iterations++;
						if (arr[k][l] < arr[i][j])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
							exchanges++;
						}
					}
				}
				else
				{
					for (int l = 0; l < COLS; l++)
					{
						iterations++;
						if (arr[k][l] < arr[i][j])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
							exchanges++;
						}
					}
				}*/
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	//cout << "Массив отсортирован за " << iterations << " итераций\n";
	//cout << "Обменов элементов: " << exchanges << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	/*int a = 0, b = 0;
	for (int i = 0; i < ROWS*COLS;i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (arr[a][b] < arr[j][k])
				{
					double buffer = arr[a][b];
					arr[a][b] = arr[j][k];
					arr[j][k] = buffer;
				}
			}
		}
		if (b == COLS - 1)
		{
			a += 1;
			b = 0;
		}
		else b += 1;
	}*/
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
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	/*int a = 0, b = 0;
	for (int i = 0; i < ROWS*COLS;i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (arr[a][b] < arr[j][k])
				{
					char buffer = arr[a][b];
					arr[a][b] = arr[j][k];
					arr[j][k] = buffer;
				}
			}
		}
		if (b == COLS - 1)
		{
			a += 1;
			b = 0;
		}
		else b += 1;
	}*/
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
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}