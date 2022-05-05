#include "Calculator.h"
#include <cmath>
double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '%':
		return (x-(trunc(x/y)*y));
	default:
		return 0.0;
	}
}