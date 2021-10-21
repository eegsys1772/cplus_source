#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;
struct toado{
 string tentp;
 int x;
 int y;
 };
 struct DS{
 	toado td;
 	DS *next;
 } *first,*last,*tam;
int main(){
 	toado td1;
 ///cout<<sizeof(toado);
 	td1.tentp="Hue";
 	td1.x=10;
 	td1.y=20;
 	FILE *f= fopen("haha.dat","wb");
 	fwrite(&td1,sizeof(toado),1,f);
 	toado td2;
 	td2.tentp="DN";
 	td2.x=20;
 	td2.y=20;
 	fwrite(&td2,sizeof(toado),1,f);
 	toado td3;
 	td3.tentp="QN";
 	td3.x=20;
 	td3.y=20;
 	fwrite(&td3,sizeof(toado),1,f);
 	fclose(f);
 	//
 	
	toado td;
	FILE *f2=fopen("haha.dat","rb");
	while(fread(&td,sizeof(toado),1,f2)){
		cout<<td.tentp<<"("<<td.x<<","<<td.y<<")"<<endl;
	}
	fclose(f2);
 }

	//	string ten;
//	cout<<"Nhap ho ten: ";
//	Tim();
	
//	loaihopdong lhd1;
// 	cout<<sizeof(loaihopdong)<<endl;
//  	strcpy(lhd1.hoten,"hue");
//// 	td1.x=10;
//// 	td1.y=20;
// 	FILE *f= fopen("luu.dat","wb");
// 	fwrite(&lhd1,sizeof(hoten),1,f);
// 	loaihopdong lhd2;
// 	cout<<sizeof(loaihopdong)<<endl;
//  	strcpy(lhd2.hoten,"dn");
//  	loaihopdong lhd3;
// 	cout<<sizeof(loaihopdong)<<endl;
//  	strcpy(lhd3.hoten,"hue");
//// 	toado td2;
//// 	strcpy(td2.tentp,"DN");
//// 	td2.x=20;
//// 	td2.y=20;
//// 	fwrite(&td2,sizeof(toado),1,f);
////	toado td3;
//// 	strcpy(td3.tentp,"QN");
//// 	td3.x=20;
//// 	td3.y=20;
//// 	fwrite(&td3,sizeof(toado),1,f);
// 	fclose(f);
//FILE *f2=fopen("luu.dat","rb");
//  loaihopdong lhd;
//  while(fread(&lhd,sizeof(loaihopdong),1,f2)){
//  	     cout<<td.hoten<<"("<<lhd.x<<","<<lhd.y<<")"<<endl;
//  }  
//	fclose(f2);
//}
