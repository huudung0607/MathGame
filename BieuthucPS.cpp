#include "BieuthucPS.h"
#include "Fraction.h"
#include <cstdlib>
using namespace std;

BieuthucPS::BieuthucPS(int level) : Bieuthuc(level)
{
	a = Fraction(rand() % 100 + 1, rand() % 100 + 1);
	b = Fraction(rand() % 100 + 1, rand() % 100 + 1);
	pheptoan = "+-*"[rand() % 3];
}
ostream& operator << (ostream& out, BieuthucPS ps)
{
	out << ps.a.getTu() << "/" << ps.a.getMau() << " " << ps.pheptoan << " " << ps.b.getTu() << "/" << ps.b.getMau() << " = ";
	return out;
}
Fraction BieuthucPS::giatri()
{
	if (pheptoan == '+')
	{
		return a + b;
	}
	else if (pheptoan == '-')
	{
		return a - b;
	}
	else
	{
		return a * b;
	}
}
bool BieuthucPS::kiemtra(Fraction traloi)
{
	return giatri() == traloi;
}