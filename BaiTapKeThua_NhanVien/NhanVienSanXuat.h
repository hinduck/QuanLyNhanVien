#include "NhanVien.h"
#pragma once

class NhanVienSanXuat :public NhanVien {
private: 
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};

