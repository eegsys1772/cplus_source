#include <iostream>
#include <stdio.h>
#include <string>
#include<string.h>
#include <stdlib.h>
using namespace std;

struct nhanvien{
 string manv;
 string hoten;
 string loaihopdong;
 float hsl;
// nhanvien *next;
};
struct DS {
	nhanvien nv;
	DS *next;
}*first, *last;

DS *DocFile(){
	FILE * f=fopen("nhanvien.txt","r");
	first = NULL;
	while(!feof(f)){
		char ma[50];	
	 	fgets(ma,50,f);
	 	ma[strlen(ma)-1]='\0';
	 	char ten[100];
	 	fgets(ten,100,f);
	 	ten[strlen(ten)-1]='\0';
	 	char loai[50];
	 	fgets(loai,50,f);
	 	loai[strlen(loai)-1]='\0';
	 	float hsl;
	 	fscanf(f,"%f\n",&hsl);
    	DS* p= new DS;
   		p->nv.manv=ma;
		p->nv.hoten=ten;
		p->nv.loaihopdong=loai;
		p->nv.hsl=hsl;	
		if(first==NULL) first = p;
		else last->next=p;
		last = p;
	}
	fclose(f);
	 return first;
}
void Xuat(){
	for(DS *p=first;p!=NULL;p=p->next)
	{
		cout<<"\nMa nhan vien: "<<p->nv.manv<<"\n"
		<<"Ho va ten: "<<p->nv.hoten<<"\n"<<"Loai hop dong: "<<p->nv.loaihopdong<<"\n"
		<<"He so luong: "<<p->nv.hsl<<endl;
	}
}

void LuuDat(){
	FILE *f=fopen("luu.dat","wb");
	string loaihd;
	getline(cin,loaihd);
	for (DS *p=first;p!=NULL;p=p->next)
	{
		if(p->nv.loaihopdong==loaihd){
			cout<<"\nMa nhan vien: "<<p->nv.manv<<"\n"
		<<"Ho va ten: "<<p->nv.hoten<<"\n"<<"Loai hop dong: "<<p->nv.loaihopdong<<"\n"
		<<"He so luong: "<<p->nv.hsl<<endl;
			fwrite(&p->nv,sizeof(nhanvien),1,f);
		}
	}
	fclose(f);
	 FILE *f2=fopen("luu.dat","rb");
	 nhanvien p;
	 while(fread(&p,sizeof(nhanvien),1,f))
	 cout<<"\nMa nhan vien: "<<p.manv<<"\n"
		<<"Ho va ten: "<<p.hoten<<"\n"<<"Loai hop dong: "<<p.loaihopdong<<"\n"
		<<"He so luong: "<<p.hsl<<endl;
	  fclose(f2);
}

int main(){
	first = DocFile();
	cout<<endl;
	Xuat();
	LuuDat();
}

