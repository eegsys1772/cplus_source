#include <iostream>
#include <stdio.h>
#include <string>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

/*struct Khoa{
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
 struct tk{
 	string tenkhoa;
 	int sosv;
 	tk* next;
 }*firsttk;*/
 
//DS *Docfile{
// 	FILE * f=fopen("dslkda.txt","r");
// 	 while(!feof(f)){
// 	char tk[50];
//  	fgets(tk,100,f);
// 	tk[strlen(tk)-1]='\0';
// 	char dc[50];
//  	fgets(dc,100,f);
// 	dc[strlen(dc)-1]='\0';
// 	
// 	firstsv=NULL;
// }
// void cau1(){
// 	for(DS *p=first;p!=NULL;p=p->next){
// 		cout<<p->khoa.tenkhoa<<","<<p->khoa.diachi<<endl;
// 		cout<<"danh sach sinh vien cua Khoa:"<<p->khoa.tenkhoa<<endl;
// 		 for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
// 		   cout<<"masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: "<<s->dtb<<endl;
// 		cout<<endl;	 
//	 }
// 	   
// }
// 
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
	
 }
 
 
 /*
void cau2(string nhap){
	int dem=0;
 	for(DS *p=first;p!=NULL;p=p->next){
 		if(p->khoa.tenkhoa==nhap){
 			cout<<"danh sach sinh vien cua Khoa:"<<p->khoa.tenkhoa<<endl;
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next){
 		    cout<<"masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: "<<s->dtb<<endl;
 		  			dem++; 
 			}
		 }
		  
		 	
	 }
	 cout<<"Khoa co: "<<dem<<" sinh vien"<<endl;
 }
 void cau3(string nhap){
 	for(DS *p=first;p!=NULL;p=p->next){
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
	 	if(s->masv==nhap){
 			cout<<"Sinh vien thuoc khoa:"<<p->khoa.tenkhoa<<endl;
 		    cout<<"masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: "<<s->dtb<<endl;
		 }
		 		
	 }
 }

void cau4(){
	int dem=0;int dem1=0;int dem2=0;
 	for(DS *p=first;p!=NULL;p=p->next){
 		if(p->khoa.tenkhoa=="CNTT"){
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
 		  			dem++;
 		}
 		if(p->khoa.tenkhoa=="TOAN"){
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
 		  			dem1++;
 		}
 		if(p->khoa.tenkhoa=="NN"){
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
 		  			dem2++;
 		}
// 	cout<<"Khoa "<<p->khoa.tenkhoa<<" co: "<<dem<<" sinh vien"<<endl;	
 		
	}	 
	cout<<"Khoa CNTT"<<" co: "<<dem<<" sinh vien"<
	}	 
	cout<<"Khoa CNTT"<<" co: "<<dem<<" sinh vien"<<endl;
	cout<<"Khoa TOAN"<<" co: "<<dem1<<" sinh vien"<<endl;	
	cout<<"Khoa NN"<<" co: "<<dem2<<" sinh vien"<<endl;		
}
//void cau5(string nhap){
//	for(DS *p=first;p!=NULL;p=p->next){
//		if(p->khoa.tenkhoa==nhap){
//			for(Sinhvien *s=p->sv;s!=NULL;){
//				Sinhvien *x; 
//				x = s;
//				s= s->next;
//				delete x;
////				p->sv=NULL;
//				
// 			}
// 			p->sv=NULL;
//// 			else 
////				s=s->next;
//		
//	}			
//}
//		cout<<"danh sach sau khi xoa"<<endl;
//		for(DS *p=first;p!=NULL;p=p->next){
//		//	cout<<p->khoa.tenkhoa<<endl;
//			for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
//				cout<<p->khoa.tenkhoa<<" masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: 
//	for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
//				cout<<p->khoa.tenkhoa<<" masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: "<<s->dtb<<endl;		
//		}
//	
//}

//DS *cau6(string k,string ma,string ten, float d){
//	int kt=0;
//	for(DS *p=first;p!=NULL;p=p->next){
//	//	for(Sinhvien *s=p->sv;s!=NULL;s=s->next){
//		//	while(x!=p->sv){
//			if(k==p->khoa.tenkhoa){	
//			Sinhvien *x =new Sinhvien;	
//			x->masv=ma;
//			x->hoten=ten;
//			x->dtb=d;
//			x->next=NULL; 
//				kt=1;
//				//firstsv->next=x;
//				x->next=p->sv;
//				p->sv=x;
//				
//				break;	
//			}	
//		//}	
//		
//	}if(kt!=1) cout<<"khong tim thay ten khoa"<<endl;
//cout<<"danh sach sau khi them"<<endl;
//		for(DS *p=first;p!=NULL;p=p->next){
//			for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
//				cout<<p->khoa.tenkhoa<<" masv: "<<s->masv<<" ten: "<<s->hoten<<" diem: "<<s->dtb<<endl;		
//		}
//}
//
/////////////////////////
//void DeleteDtbBang0(){
//	for(DS *p=first;p!=NULL;p=p->next){
//		for(Sinhvien *q=p->sv;q!=NULL;q=q->next){
//			if(q->dtb==0){
//				Sinhvien *i=p->sv;
//				while(p->sv->dtb==0){
//					
//					
//					Sinhvien *xoa=p->sv;
//					p->sv=p->sv->next;
//					delete xoa;
//				
//			}
//				while(i->next!=NULL){
//					if(i->next->dtb==0 ){
//						Sinhvien *q= i->next;
//						i->next=q->next; //xoa 1 pt
//					}
//					else
//					i=i->next;
//			
//			}
//		}
//	}
//}
//
//
//}*/
