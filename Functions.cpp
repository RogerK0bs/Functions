#include <iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Pow(int a, int b);
double Div(double a, double b);


void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите 2 числа = "; cin >> a >> b; cout << endl;
	//int c=Add(a,b)
	cout <<"\n" <<a<<"+"<<b<<"=" << Add(a, b);
	cout <<"\n" << a << "-" << b << "=" << Sub(a, b);
	cout <<"\n" << a << "*" << b << "=" << Mul(a, b);
	cout << "\n" << a << "/" << b << "=" << Div(a, b);
	cout << "\n" << a << "^" << b << "=" << Pow(a,b);
}

int Add(int a, int b)

{
	//int sum = a + b;
	return a + b;
}
int Sub(int a, int b)
{//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{//Subtraction - вычитание
	return a * b;
}
double Div(double a, double b)
{//Subtraction - вычитание
	return a / b;
}
int Pow(int a, int b)
{
	int pow1 = 1;
	for (size_t i = 1; i <= b; i++)
	{
		pow1 = pow1 * a;
	}
	return pow1;
}
