#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define ARR
//#define BRR
#define CRR

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARR
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
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
#endif // ARR

#ifdef BRR
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(brr, SIZE) << endl;
	//int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
#endif // BRR

#ifdef CRR
	cout << endl;
	const int SIZE_2 = 5;
	char crr[SIZE_2];
	FillRand(crr, SIZE_2);
	Print(crr, SIZE_2);
	Sort(crr, SIZE_2);
	Print(crr, SIZE_2);
	cout << "Сумма элементов массива: " << Sum(crr, SIZE_2) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, SIZE_2) << endl;
	cout << "Минимальное значение массива: " << minValueIn(crr, SIZE_2) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(crr, SIZE_2) << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(crr, SIZE_2, number_of_shifts);
	Print(crr, SIZE_2);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(crr, SIZE_2, number_of_shifts);
	Print(crr, SIZE_2);
#endif // CRR
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
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10 + 48;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] - 48;
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	char max = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	/*for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}*/

	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	/*for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}*/

	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	/*for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}*/

	shiftLeft(arr, n, n - number_of_shifts);
}