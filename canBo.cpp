#include<stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <ctime> 
#include<conio.h>
using namespace std;
struct canbo{
	string macb;
	string tencb;
	string diachi;
	int namvaolam;
	float hsl;
	string loaihopdong;
}*ds[100];
string getten(string ht);
void printLine(int n);
int main(){
	//cau 1
	 FILE * f=fopen("cb.txt","r");
		int n=0;
		while(!feof(f)){
		ds[n]= new canbo();
		char temp[200];
		fgets(temp,200,f);
		temp[strlen(temp) - 1] = '\0';
		ds[n]->macb=temp;
		
		char temp1[200];
		fgets(temp1,200,f);
		temp1[strlen(temp1) - 1] = '\0';
		ds[n]->tencb =temp1;
		
		char temp2[200];
		fgets(temp2,200,f);
		temp2[strlen(temp2) - 1] = '\0';
		ds[n]->diachi=temp2;
		
		fscanf(f,"%d\n",&ds[n]->namvaolam);
		fscanf(f,"%f\n",&ds[n]->hsl);
		
		char temp3[200];
		fgets(temp3,200,f);
		if(!feof(f)){
		temp3[strlen(temp3) - 1] = '\0';
		}
		ds[n]->loaihopdong=temp3;
		n++;	
	}
		fclose(f);
		cout<<"Cau 1"<<endl;
 	for(int i=0;i<n;i++){
 		cout<<"- "<<ds[i]->macb<<": "<<ds[i]->tencb<<": "<<ds[i]->diachi<<": "<<ds[i]->namvaolam<<": "<<ds[i]->hsl<<": "<<ds[i]->loaihopdong<<endl;
	 }	
}
// // cau 2
// 	printLine(100);
//	cout<<"Cau 2"<<endl;
// 	string s;	
// 	cout<<"Nhap loai hop dong:  "; 
// 	fflush(stdin);
//	getline(cin, s);
//	int kt=0;
// 	for(int i=0;i<n;i++){
// 	if(s == ds[i]->loaihopdong){
//		kt=1;
// 		cout<<"-"<<ds[i]->macb<<": "<<ds[i]->tencb<<": "<<ds[i]->diachi<<": "<<ds[i]->namvaolam<<": "<<ds[i]->hsl<<": "<<ds[i]->loaihopdong<<endl;
//	  }
//	}	
//	if (kt!=1)
//		cout<<"khong tim thay";
//printLine(100);
////Cau 3
//	cout<<"Cau 3:\n";
//	time_t baygio = time(0);
//   	tm *ltm = localtime(&baygio);
//   	cout <<"MaCB\tHo va ten\tDia Chi\tNam Vao Lam\tLoai Hop Dong\n";
//	for(int i=0; i < n; i++){
//		if(((1900 + ltm->tm_year) - ds[i]->namvaolam)%3 == 0)
//		cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->diachi<<"\t"<<ds[i]->namvaolam<<"\t \t"<<ds[i]->loaihopdong<<endl;}
////Cau 4:
//printLine(100);
//	cout<<"Cau 4:\n";
//   	cout <<"MaCB\tHo va ten\tDia Chi\tNam Vao Lam\tHe So Luong\tLoai Hop Dong\n";
//	for(int i=0; i < n; i++){
//		if(((1900 + ltm->tm_year) - ds[i]->namvaolam)%3 == 0)
//		{ds[i]->hsl=ds[i]->hsl+0.33;
//		cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->diachi<<"\t"<<ds[i]->namvaolam<<"\t \t"<<ds[i]->hsl<<"\t \t"<<ds[i]->loaihopdong<<endl;}}
////Cau 5:
//printLine(100);
//	cout<<"Cau 5\n";
//	float luong;
//	float pc;
//	// hien thi bang luong can bo: macanbo,tencb,hsl, luong(=hsl*1490),bhyt(=1%luong), 
//	//bhxh(=5%*luong),phucap(neu loai hop dong la biên che thì pc=25%*luong, nguoc lai phu cap =0)
//   	cout <<"MaCB\tHo va ten\tHe So Luong\tLuong \tBao hiem YTe\tBao Hiem XH\tPhu Cap\n";
//	for(int i=0; i < n; i++){
//		luong = ds[i]->hsl * 1490;
//        if(ds[i]->loaihopdong=="BC") 
//			pc=luong*0.25;
//		else pc=0;
//		cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->hsl<<"\t \t"<<luong<<"\t"<<luong*0.01<<"\t \t"<<luong*0.05<<"\t \t"<<pc<<endl;}
//printLine(100);
////Cau 6:
//cout<<"Cau 6\n";
//string ma;
//cout<<"Nhap vao ma can bo: ";
//cin>>ma;
//for(int i=0; i<n;i++){
//		if(ds[i]->macb == ma){
//			luong = ds[i]->hsl * 1490;
//        	if(ds[i]->loaihopdong == "BC") 
//				pc=luong*0.25;
//			else pc=0;
//		cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->hsl<<"\t \t"<<luong<<"\t"<<luong*0.01<<"\t \t"<<luong*0.05<<"\t \t"<<pc<<endl;}
//	}
//	printLine(100);
////Cau 7:
//cout<<"Cau 7\n";
//canbo *tmp;
//    for(int i = 0;i < n; i++) {
//        for(int j = i+1; j < n; j++) {
//            if(getten(ds[i]->tencb)>getten(ds[j]->tencb)) {
//                tmp = ds[i];
//                ds[i] = ds[j];
//                ds[j] = tmp;
//            }
//        }
//    cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->diachi<<"\t"<<ds[i]->namvaolam<<"\t \t"<<ds[i]->loaihopdong<<endl;
//    }
////Cau 8:
//cout<<"Cau 8: \n";
//printLine(100);
//   	for(int i=0; i < n; i++){
//		if(((1900 + ltm->tm_year) - ds[i]->namvaolam) >= 40){
//		cout<<ds[i]->macb<<"\t"<<ds[i]->tencb<<"\t \t"<<ds[i]->diachi<<"\t"<<ds[i]->namvaolam<<"\t \t"<<ds[i]->loaihopdong<<endl;}
//		}
//printLine(100);
////Cau 9
//	cout<<endl;
//	cout<<"cau 9"<<endl;
//	int bc=0, dh=0, nh=0;
//	
//	for(int i=0;i<n;i++){
//		
//		if(ds[i]->loaihopdong=="BC")
//			bc++;		                                  
//		if(ds[i]->loaihopdong=="NH")
//			nh++;		
//		if(ds[i]->loaihopdong=="DH")
//			dh++;				
//	}
//			cout <<"Co tat ca "<<bc<<" can bo bien che, "<<dh<<" can bo hop dong dai han va "<<nh<<" can bo hop dong ngan han.";
//	printLine(100);		
////Cau 10:
//cout<<"\nCau 10: \n";
//float dem1=0, dem2=0, dem3=0;	
//	for(int i = 0; i<n;i++){
//		luong = ds[i]->hsl * 1490;
//        if(ds[i]->loaihopdong == "BC")
//			dem1=dem1+luong;
//		if(ds[i]->loaihopdong == "DH")
//			dem2=dem2+luong;
//		if(ds[i]->loaihopdong == "NH") 
//			dem3=dem3+luong;
//	}
//	cout <<"Tong luong bien che la "<<dem1<<"\nTong luong can bo hop dong dai han la "<<dem2<<" \nTong luong can bo hop dong ngan han la "<<dem3;
//
//}
//
//
//void printLine(int n) {
//    cout << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "_";
//    }
//    cout << endl;
//}
//string getten(string ht){
//	int vt = ht.find_last_of(" ");
//	string ten= ht.substr(vt+1);
//	return ten;
//}

