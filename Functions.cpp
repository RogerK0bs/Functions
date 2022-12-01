#include <iostream>
using namespace std;

int Add(int a, int b);
double Add(double a, double b);
char Add(char a, char b);
float Add(float a, float b);


int Sub(int a, int b);
double Sub(double a, double b);
char Sub(char a, char b);
float Sub(float a, float b);


int Mul(int a, int b);
double Mul(double a, double b);
char Mul(char a, char b);
float Mul(float a, float b);


int Pow(int a, int b);
double Pow(double a, double b);
char Pow(char a, char b);
float Pow(float a, float b);


double Div(double a, double b);




void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	double a;
int b;
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
double Add(double a, double b)

{
	//int sum = a + b;
	return a + b;
}
char Add(char a, char b)

{
	//int sum = a + b;
	return a + b;
}
float Add(float a, float b)

{
	//int sum = a + b;
	return a + b;
}

int Sub(int a, int b)
{//Subtraction - вычитание
	return a - b;
}
double Sub(double a, double b)
{//Subtraction - вычитание
	return a - b;
}
char Sub(char a, char b)
{//Subtraction - вычитание
	return a - b;
}
float Sub(float a, float b)
{//Subtraction - вычитание
	return a - b;
}

int Mul(int a, int b)
{//Subtraction - вычитание
	return a * b;
}
double Mul(double a, double b)
{//Subtraction - вычитание
	return a * b;
}
char Mul(char a, char b)
{//Subtraction - вычитание
	return a * b;
}
float Mul(float a, float b)
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
double Pow(double a, double b)
{
	int pow1 = 1;
	for (size_t i = 1; i <= b; i++)
	{
		pow1 = pow1 * a;
	}
	return pow1;
}
char Pow(char a, char b)
{
	int pow1 = 1;
	for (size_t i = 1; i <= b; i++)
	{
		pow1 = pow1 * a;
	}
	return pow1;
}
float Pow(float a, float b)
{
	int pow1 = 1;
	for (size_t i = 1; i <= b; i++)
	{
		pow1 = pow1 * a;
	}
	return pow1;
}
