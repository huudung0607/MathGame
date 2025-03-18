#include "Fraction.h"
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

using namespace std;


Fraction::Fraction() {}
Fraction::Fraction(int tu, int mau) {
	this->tu = tu;
	this->mau = mau;
}
int Fraction::getTu()
{
	return tu;
}
int Fraction::getMau()
{
	return mau;
}
Fraction operator ++ (Fraction& a) {
	a.tu += a.mau;
	return a;
}
Fraction operator -- (Fraction& a) {
	a.tu -= a.mau;
	return a;
}
Fraction operator ++ (Fraction& a, int) {
	Fraction temp = a;
	a.tu += a.mau;
	return temp;
}

Fraction operator -- (Fraction& a, int) {
	Fraction temp = a;
	a.tu -= a.mau;
	return temp;
}
int Fraction::gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
void Fraction::rutgon()
{
	int x = gcd(tu, mau);
	tu /= x;
	mau /= x;
}
Fraction operator + (Fraction a, Fraction b)
{
	Fraction c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.rutgon();
	return c;
}
Fraction operator - (Fraction a, Fraction b)
{
	Fraction c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.rutgon();
	return c;
}
Fraction operator * (Fraction a, Fraction b)
{
	Fraction c;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	c.rutgon();
	return c;
}
Fraction operator / (Fraction a, Fraction b)
{
	Fraction c;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	c.rutgon();
	return c;
}
bool operator == (Fraction a, Fraction b) 
{
	return a.tu * b.mau == a.mau * b.tu;
}
bool operator != (Fraction a, Fraction b) 
{
	return a.tu * b.mau != a.mau * b.tu;
}
bool operator < (Fraction a, Fraction b) 
{
	return a.tu * b.mau < a.mau * b.tu;
}
istream& operator >>(istream& in, Fraction& a)
{
	string s;
	in >> s;
	stringstream ss(s);
	string tu, mau;
	getline(ss, tu, '/');
	getline(ss, mau, '/');
	cout << tu << " " << mau << endl;
	a.tu = stoi(tu);
	a.mau = stoi(mau);
	return in;
}
ostream& operator << (ostream& out, const Fraction& a)
{
	out << a.tu << "/" << a.mau;
	return out;
}