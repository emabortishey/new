#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int num, den;
public:
	// конструкторы

	Fraction() : Fraction(1, 2) {}
	explicit Fraction (int num_P) : Fraction(num_P, num_P*2) {}
	Fraction (int num_P, int den_P) : num{num_P}, den{den_P} {}
	Fraction (const Fraction& obj) : num{obj.num}, den {obj.den} {}

	// модификаторы

	void set_num(int num1)
	{
		num = num1;
	}
	void set_den(int den1)
	{
		den = den1;
	}
	int get_num()
	{
		return num;
	}
	int get_den()
	{
		return den;
	}

	// аксессоры
	void sum(int sumn, int sumd);
	void sub(int subn, int subd);
	void div(int divn, int divd);
	void mult(int multn, int multd);

	// перегрузки оператором
	Fraction& operator+(Fraction& obj2)
	{
		if (den != obj2.den)
		{
			int buffd = den;

			num *= obj2.den;
			den *= obj2.den;

			obj2.num *= buffd;
		}

		num += obj2.num;

		return *this;
	}

	Fraction& operator-(Fraction& obj2)
	{
		if (den != obj2.den)
		{
			int buffd = den;

			num *= obj2.den;
			den *= obj2.den;

			obj2.num *= buffd;
		}

		num -= obj2.num;

		return *this;
	}

	Fraction& operator/( Fraction& obj2)
	{
		int buff;

		buff = num;
		num = den;
		den = buff;

		num *= obj2.num;
		den *= obj2.den;
	}

	Fraction& operator*(Fraction& obj2)
	{
		num *= obj2.num;
		den *= obj2.den;
	}

};
