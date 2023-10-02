#include <string>
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Var intVal = 4;
	Var doubleVal = 2.5;

	Var strVal = "Hello world";
	Var strVal2 = "99";

	Var res = intVal + doubleVal;
	res.Show();

	res = doubleVal + intVal;
	res.Show();

	res = doubleVal + strVal2;
	res.Show();

	res = strVal + doubleVal;
	res.Show();

	res = intVal + strVal2;
	res.Show();

	res = strVal2 + intVal;
	res.Show();
	
}