#pragma once
#include "GCD_LCM.h"
#include <string>

class Fraction
{
public:
	int nume, denom;
	Fraction(int x, int y) : nume(x), denom(y) {};
	Fraction(int x) : nume(x), denom(1) {};
	Fraction() {};

	std::string to_string()									// xuất
	{
		std::string res = "";
		res += std::to_string(nume);
		res += '/';
		res += std::to_string(denom);
		return res;
	}

	Fraction simplify()									// tối giản
	{
		int i = GCD(nume, denom);
		nume /= i;
		denom /= i;
		return Fraction(nume, denom);
	}

	Fraction inverse()									// nghịch đảo
	{
		return Fraction(denom, nume);
	}

	static void convert(Fraction &frac1, Fraction &frac2)					// quy đồng + làm mẫu dương
	{
		if (frac1.denom < 0)
		{
			frac1.denom = -frac1.denom;
			frac1.nume = -frac1.nume;
		}
		if (frac2.denom < 0)
		{
			frac2.denom = -frac2.denom;
			frac2.nume = -frac2.nume;
		}
		int commondenom = LCM(frac1.denom, frac2.denom);
		frac1.nume *= commondenom / frac1.denom;
		frac2.nume *= commondenom / frac2.denom;
		frac1.denom = commondenom;
		frac2.denom = commondenom;
	}

	Fraction operator+ (Fraction frac2)							// cộng
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		int newnume = frac1.nume + frac2.nume;
		int newdenom = frac1.denom;
		return Fraction(newnume, newdenom).simplify();
	}

	Fraction operator- (Fraction frac2)							// trừ
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		int newnume = frac1.nume - frac2.nume;
		int newdenom = frac1.denom;
		return Fraction(newnume, newdenom).simplify();
	}

	Fraction operator* (Fraction frac2)							// nhân
	{
		int newdenom = this->denom * frac2.denom;
		int newnume = this->nume * frac2.nume;
		return Fraction(newnume, newdenom).simplify();
	}

	Fraction operator/ (Fraction frac2)							// chia
	{
		return *this * frac2.inverse();
	}
	
	bool operator== (Fraction frac2)							// so sánh ==
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume == frac2.nume;
	}

	bool operator!= (Fraction frac2)							// so sánh !=
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume != frac2.nume;
	}

	bool operator< (Fraction frac2)								// so sánh <
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume < frac2.nume;
	}

	bool operator> (Fraction frac2)								// so sánh >
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume > frac2.nume;
	}

	bool operator>= (Fraction frac2)							// so sánh >=
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume >= frac2.nume;
	}

	bool operator<= (Fraction frac2)							// so sánh <=
	{
		Fraction frac1 = *this;
		convert(frac1, frac2);
		return frac1.nume <= frac2.nume;
	}
};
