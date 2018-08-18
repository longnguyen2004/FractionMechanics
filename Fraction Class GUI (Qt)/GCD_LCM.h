#pragma once
#include <cmath>

int GCD(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (x != y)
		if (x > y) x = x - y; else y = y - x;
	return x;
}

int LCM(int x, int y)
{
	return abs(x / GCD(x, y) * y);
}