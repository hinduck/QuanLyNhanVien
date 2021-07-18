#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "NhanVienQuanLy.h"
#include <vector>
#pragma once

class CongTy
{
private:
	vector<NhanVienQuanLy> QuanLy;
	vector<NhanVienSanXuat> SanXuat;
	vector<NhanVienVanPhong> VanPhong;
public:
	void Nhap();
	void Xuat();
	float TinhTongLuong();
	void TimKiemNhanVien(string);	
};

