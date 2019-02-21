#include<iostream>
#include"operationHeader.h"
#include<string>

using namespace std;

operationClass::operationClass()
{
	num1 = 0;
	den1 = 0;
	num2 = 0;
	den2 = 0;
}

double operationClass::addition(int _num1, int _den1, int _num2, int _den2)
{
	double result;
	
	result = ((_num1 / _den1) + (_num2 / _den2));
	
	return result;
}

double operationClass::subtraction(int _num1, int _den1, int _num2, int _den2)
{
	double result;

	result = ((_num1 / _den1) - (_num2 / _den2));

	return result;
}

double operationClass::multiplication(int _num1, int _den1, int _num2, int _den2)
{
	double result;

	result = ((_num1 / _den1) * (_num2 / _den2));

	return result;
}

double operationClass::division(int _num1, int _den1, int _num2, int _den2)
{
	double result;

	result = ((_num1 / _den1) * (_den2 / _num2));

	return result;
}

void operationClass::invert(int _num, int _den)
{
	int temp;
	temp = _num;
	_num = _den;
	_den = temp;

	cout << "The result is " << _num << "/" << _den << endl;
}

void operationClass::reduce(int _num, int _den)
{
	
}

void operationClass::mixedFraction(int _num, int _den)
{

}

bool operationClass::lessThan(int _num1, int _den1, int _num2, int _den2)
{
	if ((_num1 / _den1) < (_num2 / _den2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operationClass::lessThanEqualTo(int _num1, int _den1, int _num2, int _den2)
{
	if ((_num1 / _den1) < (_num2 / _den2) || (_num1 / _den1) == (_num2 / _den2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operationClass::greaterThan(int _num1, int _den1, int _num2, int _den2)
{
	if ((_num1 / _den1) > (_num2 / _den2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operationClass::greaterThanEqualTo(int _num1, int _den1, int _num2, int _den2)
{
	if ((_num1 / _den1) > (_num2 / _den2) || (_num1 / _den1) == (_num2 / _den2))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operationClass::equalTo(int _num1, int _den1, int _num2, int _den2)
{
	if ((_num1 / _den1) == (_num2 / _den2))
	{
		return true;
	}
	else
	{
		return false;
	}
}