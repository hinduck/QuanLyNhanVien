#include "NhanVien.h"
#pragma once

class NhanVienQuanLy :public NhanVien
{
private:
	float HeSoChucVu, Thuong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

