#include "NhanVienVanPhong.h"

void NhanVienVanPhong::Nhap() {
	NhanVien::Nhap();
	do {
		cout << "\nNhap so ngay lam viec: ";
		cin >> SoNgayLamViec;
		cout << "\nNhap tien tro cap: ";
		cin >> TroCap;
	} while (SoNgayLamViec < 0 && TroCap < 0);
}

void NhanVienVanPhong::Xuat() {
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "Tro cap: " << TroCap << endl;
}

float NhanVienVanPhong::TinhLuong() {
	Luong = LuongCoBan + SoNgayLamViec * 100000 + TroCap;
	return Luong;
}