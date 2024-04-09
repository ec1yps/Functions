#include <iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
//int Fact_a(int a);
//int Fact_b(int b);
//int Pow_a_in_b(int a, int b);
//int Pow_b_in_a(int a, int b);
double Factorial(int n);
double Power(double a, int n);

//#define CLASSWORK
//#define FACTORIAL
#define POWER

void main() {
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
#ifdef CLASSWORK
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
#endif // CLASSWORK
	//cout << a << "! = " << Fact_a(a) << endl;
	//cout << b << "! = " << Fact_b(b) << endl;	
	//cout << a << " ^ " << b << " = " << Pow_a_in_b(a, b) << endl;
	//cout << b << " ^ " << a << " = " << Pow_b_in_a(a, b) << endl;

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;
#endif // FACTORIAL

	int a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a, n) << endl;
}

int Sum(int a, int b) {
	int c = a + b;
	return c;
}

int Diff(int a, int b) {
	return a - b;
}

int Prod(int a, int b) {
	return a * b;
}

double Quot(int a, int b) {
	return (double)a / b;
}

/*
int Fact_a(int a) {
	int fact = 1;
	for (int i = 1; i <=a; i++)
		fact *= i;
	return fact;
}

int Fact_b(int b) {
	int fact = 1;
	for (int i = 1; i <= b; i++)
		fact *= i;
	return fact;
}

int Pow_a_in_b(int a, int b) {
	int pow = 1;
	for (int i = 0; i < b; i++)
		pow *= a;
	return pow;
}

int Pow_b_in_a(int a, int b) {
	int pow = 1;
	for (int i = 0; i < a; i++)
		pow *= b;
	return pow;
}
*/

double Factorial(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

double Power(double a, int n) {
	double N = 1;
	if (n < 0) {
		n = -n;
		a = 1 / a;
	}
	for (int i = 0; i < n; i++) {
		N *= a;
	}
	return N;
}