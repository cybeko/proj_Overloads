#include <string>
#include <iostream>
#include "Header.h"
using namespace std;

Var::Var()
{
	strVal = nullptr;
	intVal = NULL;
	doubleVal = NULL;
}
Var::Var(const int userNum)
{
	intVal = userNum;
	doubleVal = NULL;
}
Var::Var(const double userNum)
{
	doubleVal = userNum;
	intVal = NULL;
}
Var::Var(const char* userStr) 
{
	intVal = NULL;
	doubleVal = NULL;
	strVal = userStr;
}

void Var::Show()
{
	if (intVal != NULL)
	{
		cout << intVal << endl;
	}
	else if (doubleVal != NULL)
	{
		cout << doubleVal << endl;
	}
	else if (!strVal.empty())
	{
		cout << strVal << endl;
	}
}

Var Var::operator+(Var obj)
{
	if (intVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(int(intVal + obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(int(intVal + obj.doubleVal));
		}
		else if (!obj.strVal.empty())
		{
			return Var(int(intVal + stoi(obj.strVal)));
		}
	}
	else if (doubleVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(double(doubleVal + obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(double(doubleVal + obj.doubleVal));
		}
		else if (!obj.strVal.empty())
		{
			return Var(double(doubleVal + stoi(obj.strVal)));
		}
	}
	else if (!strVal.empty())
	{
		if (obj.intVal != NULL)
		{
			string temp = strVal + to_string(obj.intVal);
			return Var(temp.c_str());
		}
		else if (obj.doubleVal != NULL)
		{
			string temp = strVal + to_string(obj.doubleVal);
			return Var(temp.c_str());
		}
		else if (!obj.strVal.empty())
		{
			string temp = strVal + obj.strVal;
			return Var(temp.c_str());
		}
	}
	return Var();
}
Var Var::operator-(Var obj)
{
	if (intVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(int(intVal - obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(int(intVal - obj.doubleVal));
		}
	}
	else if (doubleVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(double(doubleVal - obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(double(doubleVal - obj.doubleVal));
		}
	}
	return Var();
}
Var Var::operator*(Var obj)
{
	if (intVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(int(intVal * obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(int(intVal * obj.doubleVal));
		}
	}
	else if (doubleVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(double(doubleVal * obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(double(doubleVal * obj.doubleVal));
		}
	}
	return Var();
}
Var Var::operator/(Var obj)
{
	if (intVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(int(intVal / obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(int(intVal / obj.doubleVal));
		}
	}
	else if (doubleVal != NULL)
	{
		if (obj.intVal != NULL)
		{
			return Var(double(doubleVal / obj.intVal));
		}
		else if (obj.doubleVal != NULL)
		{
			return Var(double(doubleVal / obj.doubleVal));
		}
	}
	return Var();
}
