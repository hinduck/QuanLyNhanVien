#include "CongTy.h"

int main() {
	CongTy CT;
	CT.Nhap();
	CT.Xuat();
	// cout << "\nTong luong cong ty la: " << (size_t)CT.TinhTongLuong();
	CT.TimKiemNhanVien("Nguyen Hien Duc");
	return 0;
}