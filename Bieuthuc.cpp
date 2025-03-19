#include "Bieuthuc.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Bieuthuc::Bieuthuc(int level)
{
    if (level <= 3)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
    }
    else
    {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
    }

    if (level == 1)
    {
        pheptoan = '+';
    }
    else if (level == 3 || level >= 5)
    {
        int op = rand() % 3 + 1;
        pheptoan = (op == 1 ? '+' : (op == 2 ? '-' : '*'));
    }
    else
    {
        int op = rand() % 2 + 1;
        pheptoan = (op == 1 ? '+' : '-');
    }
}

float Bieuthuc::giatri()
{
    switch (pheptoan)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    default:
        return 0;
    }
}
bool Bieuthuc::kiemtra(float traloi)
{
    return giatri() == traloi;
}
ostream& operator<<(ostream& out, Bieuthuc bt)
{
    out << bt.a << " " << bt.pheptoan << " " << bt.b << " = ";
    return out;
}
