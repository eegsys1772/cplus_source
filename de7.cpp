#include <iostream>
#include <fstream>
using namespace std;
 

struct HoGiaDinh
{
	string TenChuHo;
	string DiaChi;
	int TuoiCon1;
	int TuoICon2;	
};
 
struct Node 
{
	struct Node *Next;
	HoGiaDinh data;
};
 
struct List{
	Node *pHead;
	Node* pTail;
};
 
void KhoiTao(List &l)
{
	l.pHead = l.pTail = NULL;
}
 
Node *getNode(HoGiaDinh x)
{
	Node * p = new Node;
	p->data = x;
	p->Next = NULL;
	
	
	return p;
}
 
void AddTail(List &l, Node *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	} else 
	{
		l.pTail->Next = p;
		l.pTail = p;
	}
}
 
 
void DocHoGiaDinh(ifstream &FileIn, HoGiaDinh &x)
{
	getline(FileIn, x.TenChuHo);
	getline(FileIn, x.DiaChi);
	FileIn >> x.TuoiCon1;
	FileIn >> x.TuoICon2;
}
 
void XuatHoGiaDinh(HoGiaDinh x)
{
	cout << "\nTen CHu Ho: " << x.TenChuHo;
	cout << "\nDia chi: " << x.DiaChi;
	cout << "\nTuoi Con 1: " << x.TuoiCon1;
	cout << "\nTuoi con 2: " << x.TuoICon2;
}
 
 
void DocFileDanhSach(List &l, ifstream &FileIn)
{
	KhoiTao(l);
	
	while(!FileIn.eof())
	{
		HoGiaDinh x;
		DocHoGiaDinh(FileIn, x);
		
		Node *p = getNode(x);
		
		AddTail(l, p);
		
		string s;
		getline(FileIn, s);
	}
}
 
 
 
void XuatDanhSach(List l)
{
	int dem = 1;
	for (Node *p = l.pHead; p != NULL; p = p ->Next)
	{
		cout << "\n\t-------HO GIA DINH THU " << dem++ << "-------\n";
		XuatHoGiaDinh(p->data);
	}
}
 
HoGiaDinh SuaLai(List &l, string TenChuHo, string DiaChiMoi)
{
	for (Node *p = l.pHead; p != NULL; p = p->Next)
	{
		if (p->data.TenChuHo == TenChuHo)
		{
			p->data.DiaChi = DiaChiMoi;
			return p->data;
		}
	}
}
 
void XoaDau(List &l)
{
	if (l.pHead == NULL)
	{
		return ;
	} else 
	{
			Node *k = l.pHead;
			l.pHead = l.pHead->Next;
			delete k;
	}
 
}
 
void XoaCuoi(List &l)
{
	
	if (l.pHead == NULL)
		return;
		
	for (Node *p = l.pHead; p != NULL; p = p->Next)
	{
		if (p->Next == l.pTail)
		{
			delete l.pTail;
			p->Next = NULL;
			p = l.pTail;
		}
	}
}
 
void GhiMotHoGiaDinh(ofstream &FileOut, HoGiaDinh x)
{
	FileOut << "\nTen CHu Ho: " << x.TenChuHo;
	FileOut << "\nDia chi: " << x.DiaChi;
	FileOut << "\nTuoi Con 1: " << x.TuoiCon1;
	FileOut << "\nTuoi con 2: " << x.TuoICon2;
}
 
void GhiRaFileCon1Tu1Den18Tuoi(ofstream &FileOut, List l)
{
	FileOut << "\n\t----DANH SACH CAC HO GIA DINH CO CON 1 TU 1->18 Tuoi ----\n";
	int dem = 1;
	for (Node *p = l.pHead; p != NULL; p =p->Next)
	{
		if ((p->data.TuoiCon1 >= 1) && (p->data.TuoiCon1 <= 18))
		{
			FileOut << "\n\tHo Gia Dinh THU " <<dem++ << "\n";
			GhiMotHoGiaDinh(FileOut, p->data);
		}
	}
	
}
 
int main()
{
	ifstream FileIn;
	FileIn.open("input.txt", ios_base::in);
	if(!FileIn)
	{
		cout << "\nFile khong ton tail!";
		return 0;
	}
	
	List l;
	DocFileDanhSach(l, FileIn);
	
	cout << "\n\t=====XUAT DANH SACH RA MAN HINH=====\n";
	XuatDanhSach(l);
	
	string TenChuHo, DiaChiMoi;
	fflush(stdin);
	cout << "\nNhap Ten chu ho: ";
	getline(cin, TenChuHo);
	
	cout << "\nNhap Dia Chi moi: ";
	getline(cin, DiaChiMoi);
	
	SuaLai(l, TenChuHo, DiaChiMoi);
	
	cout << "\n\t----Danh Sach Sau Khi Sua Lai----\n";
	XuatDanhSach(l);
	
	cout << "\n\t----DANH SACH SAU KHI XOA DAU VA CUOI---\n";
	XoaDau(l);
	XoaCuoi(l);
	XuatDanhSach(l);
	
	ofstream FileOut;
	FileOut.open("LuuTru.TXT", ios_base::out);
	GhiRaFileCon1Tu1Den18Tuoi(FileOut, l);
	
	FileIn.close();
	FileOut.close();
	return 0;
}
