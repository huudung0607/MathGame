#pragma once
#include "Bieuthuc.h"
#include "Fraction.h"

class BieuthucPS : public Bieuthuc
{
private:
    Fraction a, b;
public:
    BieuthucPS(int level);
    friend istream& operator>>(istream& in, BieuthucPS &ps);
    friend ostream& operator<<(ostream& out, BieuthucPS bt);
    bool kiemtra(Fraction traloi);
    Fraction giatri();
};