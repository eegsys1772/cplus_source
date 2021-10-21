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
 	DS *left,*right;
 } *first,*last,*tam;

  DS *Xepbai(){// first in first out
 	FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
  	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->left=NULL; 
 	p->right=NULL;
    if(first==NULL){
	    first=p;
	    last=p;
	}else{
		p->left=last;
		last->right=p;
		last=p;
	}
	
 
 }
	 fclose(f);
	 return first;
 }
//Tao dslk dôi de luu các toa do: doc file -> luu vào dsLk
//Xuat danh sach theo thu tu tu trái sang phai
//Xuat danh sách theo thu tu tu phai sang trái
void Xuat(DS *first){
 	for(DS *p=first;p!=NULL;p=p->left){
 		cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }

void Xuat1(){
 	for(DS *p=first;p!=NULL;p=p->right){
 			cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }
  void Xuat2(){
 	for(DS *p=last;p!=NULL;p=p->left){
 			cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }
 
 //Nhap vào 1 tên 1 tinh, in ra 2 tinh nam ke can
void Cau2(string tentp){

	for(DS * p= first;p!=NULL;p=p->right){
		if(p->td.tentp==tentp){
			if(p==first)
					cout<<p->right->td.tentp<<"("<<p->right->td.x<<";"<<p->right->td.y<<")"<<endl;
			else if(p==last)
					cout<<p->left->td.tentp <<"("<<p->left->td.x<<";"<<p->left->td.y<<")"<<endl;
				else{
					cout<<p->right->td.tentp<<"("<<p->right->td.x<<";"<<p->right->td.y<<")"<<endl;
					cout<<p->left->td.tentp <<"("<<p->left->td.x<<";"<<p->left->td.y<<")"<<endl;
				}
			}
		}
	}

 //Nhap vao 1 ten tp, xoa tp nay ra khoi ds
// Xóa nút d?u:
//p=first
//first=first->right
//first->left=NULL
//delete p

void xoa(string tentp){
	for(DS* q=first;q!=NULL;q=q->right)
	if(first->td.tentp==tentp){
	DS *p=first;
	first=first->right;
	first->left=NULL;
	delete p;
}	else if (q->td.tentp==tentp){
	DS *t=q;
	DS *qr=q->right;
	DS *ql=q->left;
	ql->right=qr;
	if(qr!=NULL)
	qr->left=ql;
	q=ql;
	delete t;
}

	}

//Gi? s? ds dã s?p x?p tang d?n theo tên tp, nh?p vào 1 tên tp m?i kèm theo t?a d? x,y. Sau dó chèn Tp này vào ds, nhung sau khi chèn ds v?n sx tang dân	

//Chèn nút q vào sau nút p
//q->right=p->right;
//q->left=p
//p->right=q;
//if(q->right!=NULL)
//q->right->left =q;
//
//Chèn d?u:
//first->left=q
//q->right=first
//first=q
void Chen(string tentp){
	DS* q= first;
	cin>>"\n ten tp:"
	cin>>"\n toa do:"
	first->left=q;
	q->right=first;
	first=q;
}


DS * Insert(string tentp,int x,int y){
	DS *q= new DS;
	q->td.tenTp=tentp;
	q->td.x=x;
	q->td.y=y;
	q->next=NULL;
	q->previous=NULL;
	DS * p=first;
	while(p!=NULL){
		if(tentp <  first->td.tenTp){
			first->previous=q;
			q->next=first;
			first=q;
			break;
		}
		else if(p==last){
			p->next=q;
			q->previous=p;
			last=q;
			break;
		}
		else if( p->td.tenTp > tentp ){
			cout<<p->td.tenTp<<endl;
			p=p->previous;
			q->next=p->next;
			q->previous=p;
			p->next=q;
			if(q->next!=NULL)
			q->next->previous=q;
			break;
			
		}
		
	p=p->next;
	}
	return first;
	
}



//Xóa nút 
//xóa nút q ? gi?a và cu?i
//xóa nút q
//DS *t=q;
//DS *qr=q->right
//DS *ql=q->left
//
//ql->right=qr
//if(qr!=NULL)
//qr->left=ql
//delete 	*/
//	
//DS *tentp=first;
//DS *first=q->right
//DS *=q->left


 int main()
 {  DS *p;
 	string tentp;
 	first = Xepbai();
 	cout<<endl;
 	Xuat1();
 	cout<<endl;
 	//Xuat2();
 	//Cau2(tentp);
 	xoa(tentp);
 	Xuat1();
 
 }
 
 
 
 
 //Tao dslk dôi de luu các toa do: doc file -> luu vào dsLk
//Xuat danh sach theo thu tu tu trái sang phai
//Xuat danh sách theo thu tu tu phai sang trái

//Nhap vào 1 tên 1 tinh, in ra 2 tinh nam ke can
/*void Cau2(string tentp){

	for(DS * p= first;p!=NULL;p=p->right){
		if(p->td.tentp==tentp){
			if(p==first)
					cout<<p->right->td.tentp<<"("<<p->right->td.x<<";"<<p->right->td.y<<")"<<endl;
			else if(p==last)
					cout<<p->left->td.tentp <<"("<<p->left->td.x<<";"<<p->left->td.y<<")"<<endl;
				else{
					cout<<p->right->td.tentp<<"("<<p->right->td.x<<";"<<p->right->td.y<<")"<<endl;
					cout<<p->left->td.tentp <<"("<<p->left->td.x<<";"<<p->left->td.y<<")"<<endl;
				}
			}
		}
	}

////struct toado{
 /*string tentp;
 int x;
 int y;
 };
 struct DS{
 	toado td;
 	DS *next;
	DS *prev;
 } *first,*last,*tam;
 DS *FIFO(){
	FILE * f=fopen("C:\\Users\\nguye\\OneDrive\\Máy tính\\luyentap6.txt","r");
	 int x,y;
	 last=NULL;
	 first=NULL;
	 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->prev=NULL;
 	p->next=NULL;
 	// chen cuoi
 	if(first==NULL){
 		first=last=p;
	 }else{
	 	last->next=p;
	 	p->prev=last;
	 	last=p;
	 }
 }
 fclose(f);
 return first;
} 
///////
void Cau2(DS * first,string tentp){

	for(DS * p= first;p!=NULL;p=p->next){
		if(p->td.tenTp==tentp){
			if(p==first)
					cout<<p->next->td.tenTp<<"("<<p->next->td.x<<";"<<p->next->td.y<<")"<<endl;
			else if(p==last)
					cout<<p->previous->td.tenTp <<"("<<p->previous->td.x<<";"<<p->previous->td.y<<")"<<endl;
				else{
					cout<<p->next->td.tenTp<<"("<<p->next->td.x<<";"<<p->next->td.y<<")"<<endl;
					cout<<p->previous->td.tenTp <<"("<<p->previous->td.x<<";"<<p->previous->td.y<<")"<<endl;
				break;
		}
	}
	
}*/
