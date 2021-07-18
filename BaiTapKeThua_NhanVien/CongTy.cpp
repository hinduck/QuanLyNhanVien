#include "CongTy.h"

void CongTy::Nhap() {
	int LuaChon;
	do {
		cout << "\n----------Menu----------";
		cout << "\n1. Nhan Vien Van Phong";
		cout << "\n2. Nhan Vien San Xuat";
		cout << "\n3. Nhan Vien Quan Ly";
		cout << "\n4. Thoat";
		cout << "\n------------------------" << endl;
		do {
			cout << "\nNhap lua chon cua ban: ";
			cin >> LuaChon;
			if (LuaChon < 1 || LuaChon > 4)
				cout << "\nLua chon khong hop le!";
		} while (LuaChon < 1 || LuaChon > 4);
		if (LuaChon == 1) {
			NhanVienVanPhong VP;
			VP.Nhap();
			VanPhong.push_back(VP);
		}
		else if (LuaChon == 2) {
			NhanVienSanXuat SX;
			SX.Nhap();
			SanXuat.push_back(SX);
		}
		else if (LuaChon == 3) {
			NhanVienQuanLy QL;
			QL.Nhap();
			QuanLy.push_back(QL);
		}
	} while (LuaChon != 4);
}

void CongTy::Xuat() {
	cout << "\n-------------Danh sach nhan vien VAN PHONG: " << endl;
	for (int i = 0; i < VanPhong.size(); i++) {
		VanPhong[i].Xuat();
	}

	cout << "\n-------------Danh sach nhan vien SAN XUAT: " << endl;
	for (int i = 0; i < SanXuat.size(); i++) {
		SanXuat[i].Xuat();
	}
	
	cout << "\n-------------Danh sach nhan vien QUAN LY: " << endl;
	for (int i = 0; i < QuanLy.size(); i++) {
		QuanLy[i].Xuat();
	}
}

float CongTy::TinhTongLuong() {
	float Tong = 0;
	for (int i = 0; i < VanPhong.size(); i++) {
		Tong += VanPhong[i].TinhLuong();
	}
	for (int i = 0; i < SanXuat.size(); i++) {
		Tong += SanXuat[i].TinhLuong();
	}
	for (int i = 0; i < QuanLy.size(); i++) {
		Tong += QuanLy[i].TinhLuong();
	}
	return Tong;
}

void CongTy::TimKiemNhanVien(string name) {
	bool check = false;
	cout << "\n---------------Ket qua tim kiem----------------";
	for (int i = 0; i < VanPhong.size(); i++) {
		if (VanPhong[i].GetName() == name)
		{
			VanPhong[i].Xuat();
			cout << endl;
			check = true;
		}
	}
	for (int i = 0; i < SanXuat.size(); i++) {
		if (SanXuat[i].GetName() == name) {
			SanXuat[i].Xuat();
			cout << endl;
			check = true;
		}
	}
	for (int i = 0; i < QuanLy.size(); i++) {
		if (QuanLy[i].GetName() == name)
		{
			QuanLy[i].Xuat();
			cout << endl;
			check = true;
		}
	}
	if (!check) {
		cout << "\nKhong tim thay nhan vien co ten la: " << name << endl;
	}
}