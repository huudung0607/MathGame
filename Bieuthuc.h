#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
class Bieuthuc
{
protected:
    int a, b; // hai toán hạng
    char pheptoan; // ký tự đại diện phép toán {+, -, *}
public:
    Bieuthuc(int level); // sinh ngẫu nhiên biểu thức theo quy luật
    bool kiemtra(float traloi); //nhận câu trả lời và kiểm tra xem giá trị biểu thức có trùng câu trả lời không
    float giatri(); //tính giá trị biểu thức
	friend ostream& operator << (ostream& out, Bieuthuc bt); //in ra biểu thức
};