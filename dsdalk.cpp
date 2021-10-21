#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

 int main(){
 	FILE * f=fopen("dslkda.txt","r");
 	struct Khoa{
	 string tenkhoa;
	 string diachi;
	};
	struct Sinhvien{
	 string masv;
	 string hoten;
	 float dtb;
	 Sinhvien *next;
	}*firstsv,*psv;
	struct DS{
 	Khoa khoa;
 	Sinhvien *sv;
 	DS *next;
 } *first,*last;

 while(!feof(f)){
 	char tk[50];
  	fgets(tk,100,f);
 	tk[strlen(tk)-1]='\0';
 	char dc[50];
  	fgets(dc,100,f);
 	dc[strlen(dc)-1]='\0';
 	cout<<tk<<":"<<dc<<endl;
 	 	cout<<"danh sach sinh vien cua Khoa:"<<tk<<endl;
while(1){
 		char masv[50];	//fflush(stdin);
	 	fgets(masv,100,f);
	 	masv[strlen(masv)-1]='\0';
	 	string ma=masv;
	 	if(strlen(masv)==0||feof(f)) break;
	 	
  		char ht[50];//	fflush(stdin);
	 	fgets(ht,100,f);
	 	ht[strlen(ht)-1]='\0';
	 	
	 	char dtb[50];//	fflush(stdin);
	 	fgets(dtb,100,f);
	 	dtb[strlen(dtb)-1]='\0';
    	float d= atof(dtb);//doi chuoi ra so
	 	cout<<"masv: "<<masv<< " "<<ht<<" "<<d<<endl;
	
	///
		DS *p =new DS;
		p->khoa.tenkhoa=tk;
		p->khoa.diachi=dc;
		p->next=first;
		first=p;
	  }
	  cout<<endl;
 }
	 fclose(f);
	
	/////

	//Tao ra 1 ds lien ket chua cac Khoa chua quan tam den sinh vien
//	DS *p =new DS;
//	p->khoa.tenkhoa=tk;
//	p->khoa.diachi=dc;
//	p->next=first;
//	first=p;
 }
 

 
 ////////Cau truc chung/////////
//struct Khoa{
// string tenkhoa;
// string diachi;
//};
//struct Sinhvien{
// string masv;
// string hoten;
// float dtb;
// Sinhvien *next;
//}*firstsv;
//struct DS{
// 	Khoa khoa;
// 	Sinhvien *sv;
// 	DS *next;
// } *first,*last;

////
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <stdlib.h>
// 
//using namespace std;
//struct sinhvien {
//	string tenkhoa;
//	string diachi;
//	string masv;
//	string tensv;
//	double dtb;
//}*ds[100];
// 
// 
//void DocFile1CanBo(ifstream& FileIn, sinhvien& sv)
//{
//	getline(FileIn, sv.tenkhoa, ',');
//	getline(FileIn, sv.diachi, ',');
//	getline(FileIn, sv.masv, ',');
//	getline(FileIn, sv.tensv, ',');
//	string diemtrungbinh;
//	getline(FileIn, diemtrungbinh);
//	sv.dtb = atof(diemtrungbinh.c_str());
//}
// 
//void Xuat1SinhVien(sinhvien sv)
//{
//	cout << "\nTen Khoa: " << sv.tenkhoa;
//	cout << "\nDia Chi: " << sv.diachi;
//	cout << "\nMa Sinh Vien: " << sv.masv;
//	cout << "\nTen Sinh Vien: " << sv.tensv;
//	cout << "\nDiem Trung Binh: " << sv.dtb;
//}
// 
//void DocFileDSCanBo(ifstream& FileIn, sinhvien ds[], int& n)
//{
//	n = 0;
//	while (!FileIn.eof())
//	{
//		string s;
//		getline(FileIn, s);
//		n++;
//	}
//	FileIn.seekg(ios_base::beg);
//	for (int i = 0; i < n; i++)
//	{
//		sinhvien sv;
//		DocFile1CanBo(FileIn, sv);
//		ds[i] = sv;
//	}
// 
//}
// 
// 
//void XuatDSCanBo(sinhvien ds[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "\n\n\t===XUAT Sinh Vien Thu " <<i+1<< "===\n";
//		Xuat1SinhVien(ds[i]);
//	}
//}
// 
// 
// 
//int main()
//{
// 	int luachon;
//	
//	while(1)
//	{
//		system("cls");
//		
//	sinhvien ds[100];
//	int n;
// 	int x;
//	ifstream FileIn;
//	FileIn.open("dslkda.txt", ios::in);
//		if (!FileIn)
//	{
//		cout << "File khong mo duoc";
//		return 0;
//	}
//		
//		cout<<"\n\n\n\t\t ========================== MENU ==========================\n\n ";
//		cout<<"\n0. Ket Thuc ";
//		cout<<"\n1. Xuat Danh Sach Can Bo ";
//		cout<<"\n\n\n\t\t ========================== END ========================== ";
//		cout<<"\nNhap lua chon: ";
//		cin>> luachon;
//		
//		if(luachon !=0 && luachon!=1)
//		{
//			cout <<"\nLua chon khong hop le. Kiem tra lai ";
//			system("pause");
//		}
//		else if(luachon==1)
//		{
//			cout<<"\n";
//			DocFileDSCanBo(FileIn,ds,n);
//			XuatDSCanBo(ds,n);
//			system("pause");
//		}
//		else
//		{
//			break;
//		}
//		FileIn.close();
//		system("pause");
//		
//	}
//}
//
////tên khoa
////d?a ch? c?a khoa
////Ds sinh viên:
////mã
////h? tên
////dtb
////ds sinh viên gi?a các khoa ngan chách b?i 1 dòng trông
////
////Xu?t file theo d?ng
////DS sinh viên c?a Khoa: Tên Khoa, d?a ch?
////Các dòng ti?p theo: xu?t thông tin sv c?a khoa dó
////
////
////Khai báo 1 ds liên k?t ch?a thông tin c?a Khoa và c?a sv
////
////dslk don 


/*struct khoa{
 	string tenkhoa;
 	string diachi;
 	SINHVIEN *sv;
 };
 struct sinhvien{
	string msv;
	string tensv;
	int diem;
};
struct SINHVIEN{
	sinhvien ttsv;
	SINHVIEN *right;
} *dau,*cuoi,*tam;

 struct KHOA{
 	khoa ttk;
 	KHOA *next;
 	SINHVIEN *right;
 } *first,*last,*temp;
 
 
 //
 struct Sinhvien {
	string masv;
	string hoten;
	double dtb;
	Sinhvien *next;
};

struct Khoa{
		Sinhvien *sv;
		string tenkhoa;
		string diachi;
		Khoa *next;
} *first;

///
struct Sinhvien{
 	string msv;
 	string ht;
 	double diem;
 	Sinhvien *right;
};
struct Khoa{
 	Sinhvien *sv;
 	string tenkhoa;
 	string diachi;
 	Khoa *right;
}*first,*last,*tam
*/
