#pragma once
#include "Bieuthuc.h"
#include <iostream>
using namespace std;
//Xây dựng các lớp biểu thức phức tạp hơn, ví dụ(a* a + b * b) hay(a#b)* (a#b), để tăng cấp độ khó cho trò chơi. 


class BieuthucPT : public Bieuthuc
{
private:
    int c, d;
    char pheptoan2, pheptoan3;
public:
    BieuthucPT(int level); //overide để sinh ngẫu nhiên được dạng biểu thức mới, quy luật sinh như sinh lớp Bieuthuc
    friend ostream& operator<<(ostream& out, BieuthucPT bt); //overide để xuất dạng biểu thức mới
    bool kiemtra(float traloi); //overide...
    float giatri(); //overide...
};