#include "BieuthucPT.h"
#include "Bieuthuc.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

BieuthucPT::BieuthucPT(int level) : Bieuthuc(level) {
	char pheptoan_arr[3] = { '+', '-', '*' };
	pheptoan2 = pheptoan_arr[rand() % 3];
	pheptoan3 = pheptoan_arr[rand() % 3];
	c = rand() % 100 + 1;
	d = rand() % 100 + 1;
}

ostream& operator<<(ostream& out, BieuthucPT bt) {
	out << bt.a << " " << bt.pheptoan2 << " " << bt.b << " " << bt.pheptoan << " " << bt.c << " " << bt.pheptoan3 << " " << bt.d << " = ";
	return out;
}
bool BieuthucPT::kiemtra(float traloi)
{
	return giatri() == traloi;
}
float BieuthucPT::giatri()
{
	if (pheptoan == '+')
	{
		if (pheptoan2 == '+')
		{
			if (pheptoan3 == '+')
			{
				return a + b + c + d;
			}
			else if (pheptoan3 == '-')
			{
				return a + b + c - d;
			}
			else
			{
				return a + b + (c * d);
			}
		}
		else if (pheptoan2 == '-')
		{
			if (pheptoan3 == '+')
			{
				return a - b + c + d;
			}
			else if (pheptoan3 == '-')
			{
				return a - b + c - d;
			}
			else
			{
				return a - b + (c * d);
			}
		}
		else
		{
			if (pheptoan3 == '+')
			{
				return (long long)(a * b) + c + d;
			}
			else if (pheptoan3 == '-')
			{
				return (long long)(a * b) + c - d;
			}
			else
			{
				return (long long)(a * b) + (c * d);
			}
		}
	}
	else if (pheptoan == '-')
	{
		if (pheptoan2 == '+')
		{
			if (pheptoan3 == '+')
			{
				return a + b - c + d;
			}
			else if (pheptoan3 == '-')
			{
				return a + b - c - d;
			}
			else
			{
				return a + b - (c * d);
			}
		}
		else if (pheptoan2 == '-')
		{
			if (pheptoan3 == '+')
			{
				return a - b - c + d;
			}
			else if (pheptoan3 == '-')
			{
				return a - b - c - d;
			}
			else
			{
				return a - b - (c * d);
			}
		}
		else
		{
			if (pheptoan3 == '+')
			{
				return (long long)(a * b) - c + d;
			}
			else if (pheptoan3 == '-')
			{
				return (long long)(a * b) - c - d;
			}
			else
			{
				return (long long)(a * b) - (c * d);
			}
		}
	}
	else
	{
		if (pheptoan2 == '+')
		{
			if (pheptoan3 == '+')
			{
				return a + (b * c) + d;
			}
			else if (pheptoan3 == '-')
			{
				return a + (b * c) - d;
			}
			else
			{
				return a + (b * (c * d));
			}
		}
		else if (pheptoan2 == '-')
		{
			if (pheptoan3 == '+')
			{
				return a - (b * c) + d;
			}
			else if (pheptoan3 == '-')
			{
				return a - (b * c) - d;
			}
			else
			{
				return a - (long long)(b * (c * d));
			}
		}
		else
		{
			if (pheptoan3 == '+')
			{
				return (long long)((a * b) * c) + d;
			}
			else if (pheptoan3 == '-')
			{
				return (long long)((a * b) * c) - d;
			}
			else
			{
				return (long long)(a * b) * (c * d);
			}
		}
	}
}