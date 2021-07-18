#include "NhanVien.h"


void NhanVien::Nhap() {
	cout << "\nNhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "\nNhap ngay thang nam sinh (VD: 06/11/2002): ";
	cin.ignore();
	getline(cin, NgaySinh);
}

void NhanVien::Xuat() {
	cout << "\nHo ten: " << HoTen << endl;
	cout << "Luong co ban: " << LuongCoBan << endl;
}

NhanVien::NhanVien() {
	LuongCoBan = 200000;
}