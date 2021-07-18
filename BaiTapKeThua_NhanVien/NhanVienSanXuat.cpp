#include "NhanVienSanXuat.h"

void NhanVienSanXuat::Nhap() {
	NhanVien::Nhap();
	do
	{
		cout << "\nNhap so san pham: ";
		cin >> SoSanPham;
	} while (SoSanPham < 0);
}

void NhanVienSanXuat::Xuat() {
	NhanVien::Xuat();
	cout << "So san pham: " << SoSanPham << endl;
}

float NhanVienSanXuat::TinhLuong() {
	Luong = LuongCoBan + SoSanPham * 2000;
	return Luong;
}