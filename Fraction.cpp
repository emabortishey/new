#include "Fraction.h"

// методы для арифметических действий без перегрузки операторов (из старой версии дз)
void Fraction::sum(int sumn, int sumd)
{
	if (den != sumd)
	{
		int buffd = den;

		num *= sumd;
		den *= sumd;

		sumn *= buffd;
	}

	num += sumn;
}
void Fraction::sub(int subn, int subd)
{
	if (den != subd)
	{
		int buffd = den;

		num *= subd;
		den *= subd;

		subn *= buffd;
	}

	num -= subn;
}
void Fraction::div(int divn, int divd)
{
	int buff;

	buff = num;
	num = den;
	den = buff;

	num *= divn;
	den *= divd;
}
void Fraction::mult(int multn, int multd)
{
	num *= multn;
	den *= multd;
}
