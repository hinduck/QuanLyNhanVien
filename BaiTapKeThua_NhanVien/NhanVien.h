#include <iostream>
#include <string>

using namespace std;

#pragma once
class NhanVien {
protected:
	string HoTen, NgaySinh;
	float Luong, LuongCoBan;
public:
	string GetName() {
		return HoTen;
	}
	void Nhap();
	void Xuat();
	NhanVien();
};

