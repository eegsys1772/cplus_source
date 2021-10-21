#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
 
 
using namespace std;
 
 
struct canbo {
	string macb;
	string tencb;
	string diachi;
	int namvaolam;
	double hsl;
	string loaihopdong;
}*ds[100];
 
 
void DocFile1CanBo(ifstream& FileIn, canbo& cb)
{
	getline(FileIn, cb.macb, '|');
	getline(FileIn, cb.tencb, '|');
	getline(FileIn, cb.diachi, '|');
	string namvaolam;
	getline(FileIn, namvaolam, '|');
	cb.namvaolam = atoi(namvaolam.c_str());
	string hesoluong;
	getline(FileIn, hesoluong, '|' );
	cb.hsl = atof(hesoluong.c_str());
	getline(FileIn, cb.loaihopdong);
}
 
void Xuat1CanBo(canbo cb)
{
	cout << "\nMa Can Bo: " << cb.macb;
	cout << "\nTen Can Bo: " << cb.tencb;
	cout << "\nDia chi: " << cb.diachi;
	cout << "\nNam vao lam: " << cb.namvaolam;
	cout << "\nHe so luong: " << cb.hsl;
	cout << "\nLoai hop dong: " << cb.loaihopdong;
}
 
void DocFileDanhSach(ifstream& FileIn, canbo ds[], int& n)
{
	n = 0;
	while (!FileIn.eof())
	{
		string s;
		getline(FileIn, s);
		n++;
	}
	FileIn.seekg(ios_base::beg);
 
	for (int i = 0; i < n; i++)
	{
		canbo cb;
		DocFile1CanBo(FileIn, cb);
		ds[i] = cb;
	}
 
}
 
 
void XuatDanhSachCanBo(canbo ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\t===XUAT CAN BO THU " << i + 1 << "===\n";
		Xuat1CanBo(ds[i]);
	}
}
 
void XuatRaCacCanBoCungLoaiHopDong(canbo ds[], int n, string LoaiHopDong)
{
	int dem = 1;
	cout << "\n\t--------CAC CAN BO CUNG LOAI HOP DONG LA--------\n";
	for (int i = 0; i < n; i++)
	{
		if (ds[i].loaihopdong == LoaiHopDong)
		{
			cout << "\n\tCan Bo Thu " << dem++ << "\n";
			Xuat1CanBo(ds[i]);
		}
	}
}
 
void TangLuongChoCanBo(canbo ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = 2021 - ds[i].namvaolam;
		x /= 3;
 
		ds[i].hsl += x * 0.33;
	}
}
 
double TinhLuongCanBo(canbo x)
{
	double Luong = 1490 * x.hsl;
	if (x.loaihopdong == "Bien Che")
	{
		Luong = Luong - Luong * 0.01 - 0.05 * Luong - 0.25 * Luong;
	}
	else
	{
		Luong = Luong - Luong * 0.01 - 0.05 * Luong;
	}
 
	return Luong;
}
 
void XuatBangLuongCanBo(canbo x)
{
	cout << "\nMa can bo: " << x.macb;
	cout << "\nten can bo: " << x.tencb;
	cout << "\nhe so luong: " << x.hsl;
	cout << "\nLuong: " << TinhLuongCanBo(x);
}
 
void XuatLuongCanBoTheoMa(canbo ds[], int n, string ma)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].macb == ma)
		{
			cout << "\n\t----Bang Luong cua can bo: " << ma << "----\n";
			XuatBangLuongCanBo(ds[i]);
		}
 
	}
}
 
 
 
 
string LayTen(string s)
{
	string Ten;
 
	int n = s.length();
	int vtBatDau;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] != ' ' && s[i - 1] == ' ')
		{
			vtBatDau = i;
			break;
		}
	}
 
	for (int i = vtBatDau; i < n; i++)
	{
		if (s[i] != ' ' )
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += 32;
			}
 
			Ten += s[i];
 
		}
	}
 
	return Ten;
}
 
void HoanVi(canbo& a, canbo& b)
{
	canbo temp = a;
	a = b;
	b = temp;
}
 
void XuatCacCanBoVeHuu(canbo ds[], int n)
{
	int dem = 1;
	bool check = false;
	for (int i = 0; i < n; i++)
	{
		if ((2021 - ds[i].namvaolam) > 40)
		{
			check = true;
			cout << "\n\tCan bo nghi huu thu " << dem << "\n";
			Xuat1CanBo(ds[i]);
		}
	}
 
	if (check == false)
	{
		cout << "\nKhong Tim  thay cac can bo ve huu!";
	}
}
 
void SapXeoTheoTen(canbo ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			
			if (LayTen(ds[i].tencb) > LayTen(ds[j].tencb))
			{
				HoanVi(ds[i], ds[j]);
			}
		}
	}
}
 
void DemCacCanBoCoCungLoaiHopDong(canbo ds[], int n)
{
	int demBienChe = 0;
	int demNganHan = 0;
	int demDaiHan = 0;
 
	for (int i = 0; i < n; i++)
	{
		if (ds[i].loaihopdong == "Bien Che")
		{
			demBienChe++;
		}
		else if (ds[i].loaihopdong == "Ngan Han")
			demNganHan++;
		else if (ds[i].loaihopdong == "Dai Han")
		{
			demDaiHan++;
		}
	}
 
	cout << "\nCo " << demBienChe << " can bo co loai hop dong Bien Che";
	cout << "\nCo " << demNganHan << " can bo co loai hop dong Ngan Han";
	cout << "\nCo " << demDaiHan << " can bo co loai hop dong Dai Han";
 
}
 
 
int main()
{
	canbo ds[100];
	int n;
 
	ifstream FileIn;
	FileIn.open("cb.TXT", ios_base::in);
	if (!FileIn)
	{
		cout << "\nfile khong ton tai!";
		return 0;
	}
 
	DocFileDanhSach(FileIn, ds, n);
	XuatDanhSachCanBo(ds, n);
 
	// Nh?p Vào 1 H?p Ð?ng in ra các cán b?
	string LoaiHopDong;
	rewind(stdin);
	cout << "\nNhap loai hop dong: ";
	getline(cin, LoaiHopDong);
	XuatRaCacCanBoCungLoaiHopDong(ds, n, LoaiHopDong);
	TangLuongChoCanBo(ds, n);
	string MaCanBo;
	rewind(stdin);
	cout << "\nNhap Ma Can Bo: ";
	getline(cin, MaCanBo);
	XuatLuongCanBoTheoMa(ds, n, MaCanBo);
	SapXeoTheoTen(ds, n);
	cout << "\n--------Sap Xep Theo Ten Can Bo--------\n";
	XuatDanhSachCanBo(ds, n);
	cout << "\n--------Xuat Cac Can Bo Ve Huu--------\n";
	XuatCacCanBoVeHuu(ds, n);
	cout << "\n--------Dem Cac Can Bo Cung Loai Hop Dong--------\n";
	DemCacCanBoCoCungLoaiHopDong(ds, n);
 
	FileIn.close();
	return 0;
}
