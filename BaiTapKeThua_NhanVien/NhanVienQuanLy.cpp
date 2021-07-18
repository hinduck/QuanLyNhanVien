#include "NhanVienQuanLy.h"

void NhanVienQuanLy::Nhap() {
	NhanVien::Nhap();
	do {
		cout << "\nNhap he so chuc vu: ";
		cin >> HeSoChucVu;
		cout << "\nNhap tien thuong: ";
		cin >> Thuong;
	} while (HeSoChucVu < 0 && Thuong < 0);
}

void NhanVienQuanLy::Xuat() {
	NhanVien::Xuat();
	cout << "He so chuc vu: " << HeSoChucVu << endl;
	cout << "Tien thuong: " << Thuong << endl;
}

float NhanVienQuanLy::TinhLuong() {
	Luong = LuongCoBan * HeSoChucVu + Thuong;
	return Luong;
}