#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int tu, mau;
public:
	Fraction();
	Fraction(int tu, int mau);
	int getTu();
	int getMau();
	friend istream& operator >> (istream& in, Fraction& a);
	friend ostream& operator << (ostream& out, const Fraction& a);
	int gcd(int a, int b);
	void rutgon();
	friend Fraction operator + (Fraction a, Fraction b);
	friend Fraction operator - (Fraction a, Fraction b);
	friend Fraction operator * (Fraction a, Fraction b);
	friend Fraction operator / (Fraction a, Fraction b);
	friend Fraction operator ++ (Fraction& a);
	friend Fraction operator -- (Fraction& a);
	friend Fraction operator ++ (Fraction& a, int);
	friend Fraction operator -- (Fraction& a, int);
	friend bool operator < (Fraction a, Fraction b);
	friend bool operator == (Fraction a, Fraction b);
	friend bool operator != (Fraction a, Fraction b);
};
