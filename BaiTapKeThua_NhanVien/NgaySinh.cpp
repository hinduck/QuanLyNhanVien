#include "NgaySinh.h"
#include <iostream>
using namespace std;

void NgaySinh::Nhap() {
	do {
		cout << "Nhap ngay sinh: ";
		cin >> Ngay;
		cout << "Nhap thang sinh: ";
		cin >> Thang;
		cout << "Nhap nam sinh: ";
		cin >> Nam;
	} while ((Ngay > 31) && (Ngay > 30 && Thang != 4, 6, 9, 11) && (Ngay < 0 && Thang < 0 && Nam < 1900));
}

void NgaySinh::Xuat() {
	cout << "Ngay sinh: " << Ngay << "/" << Thang << "/" << Nam;
}