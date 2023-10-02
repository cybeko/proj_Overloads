#pragma once
#include <string>
using namespace std;

class Var
{
private:
	int intVal;
	double doubleVal;
	string strVal;
public:
	Var();
	Var(const int userNum);
	Var(const double userNum);
	Var(const char* userStr);

	void Show();

	Var operator+(Var point);
	Var operator-(Var point);
	Var operator*(Var point);
	Var operator/(Var point);
};