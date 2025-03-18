#include "Dethi.h"
#include "BieuthucCong.h"
#include "BieuthucTru.h"
#include "BieuthucNhan.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

Dethi::Dethi(int n1, int n2, int n3, int level)
{
	for (int i = 0; i < n1; i++)
	{
		ds.push_back(BieuthucCong(level));
	}
	for (int i = 0; i < n2; i++)
	{
		ds.push_back(BieuthucTru(level));
	}
	for (int i = 0; i < n3; i++)
	{
		ds.push_back(BieuthucNhan(level));
	}
}

int Dethi::danhgia(istream& input) {
	int cnt = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		Bieuthuc bt = ds[i];
		cout << bt << " = ";
		float traloi;
		input >> traloi;
		if (traloi == 0)
		{
			break;
		}
		else if (bt.kiemtra(traloi)) 
		{
			cnt++;
		}
	}
	return cnt;	
}

void Dethi::xuat(ostream& output) 
{
	for (int i = 0; i < ds.size(); i++) 
	{
		output << ds[i] << " = ?" << endl;
	}
}