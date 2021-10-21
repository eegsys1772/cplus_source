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
 
//DS *Xepbai(){// first in first out
// 	FILE * f=fopen("toado.txt","r");
// int x,y;
// first=NULL;
// while(!feof(f)){
// 	char tp[50];
// 	fgets(tp,100,f);
// 	tp[strlen(tp)-1]='\0';
//  	fscanf(f,"%d\n",&x);
// 	fscanf(f,"%d\n",&y);
//  	DS *p=new DS;
// 	p->td.x=x;
// 	p->td.y=y;
// 	p->td.tentp=tp;
// 	p->next=NULL; 
// //Chen dau
//    if(first==NULL||p->td.tentp<first->td.tentp){
//    	p->next=first;
//    	first=p;
//	}else{
//		DS *q=first;
//		while(q->next!=NULL&& q->next->td.tentp<p->td.tentp)
//		  q=q->next;
//		  //Chen p vao sau q
//		 p->next =q->next;
//		 q->next=p;
//	}
//	
// 
// }
//	 fclose(f);
//	 return first;
// }
// 
 DS *FIFO(){// first in first out
 	FILE * f=fopen("toado.txt","r");
 int x,y;
 first=NULL;
 while(!feof(f)){
 	char tp[50];
 	fgets(tp,100,f);
 	tp[strlen(tp)-1]='\0';
  	fscanf(f,"%d\n",&x);
 	fscanf(f,"%d\n",&y);
 	//cout<<tp<<"("<<x<<","<<y<<")"<<endl;// dong khi chay //2
 	DS *p=new DS;
 	p->td.x=x;
 	p->td.y=y;
 	p->td.tentp=tp;
 	p->next=NULL;
 	if(first==NULL) first=p;
 	else
 		last->next=p;
 	last=p;
 }
	 fclose(f);
	 return first;
 }
 //2
 void Xuat(DS *first){
 	for(DS *p=first;p!=NULL;p=p->next){
 			cout<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	 }
 }

/*void sapxep(DS *first)
{	
	for(DS *p=first;p!=NULL;p=p->next)
	{
		for(DS *q=p->next;q!=NULL;q=q->next)
		{
			if(p->td.tentp>q->td.tentp)
			{
				toado temp = p->td;
				p->td=q->td;
				q->td=temp;
			}
		}
	}
}



 
int main()
{	
	first=FIFO();
	Xuat(first);
	sapxep(first);
	
}*/
/*void Delete(DS *first) 
	delete *p;

DS* delete(){
	int n;
	cout<<"Nhap vao goc phan tu thu nhat: "; cin>>n;
	
	while(first != NULL && checkgp4(first ->td) == n){
		first = DelHead();
	}
	if(first != NULL){
		DS *p = first;
		while(p->next!=NULL){
			if(checkgp4(p->next->td)== n){
				DS* temp = p->next;
				p->next= temp->next;
				delete temp;
			}
			else p= p->next;
		}
	}
	return first;
}*/
DS *Delete(DS *first)
{
	DS *p;
	if(first != NULL && (first->td.x > 0 && first->td.y > 0))
	{
			p = first;
			first = first->next;
			delete p;
	}
	p = first;
	while( p != NULL && p->next != NULL)
		{
			DS *q;
			if(p->next->td.x > 0 && p->next->td.y > 0)
			{
				q = p->next;
                p->next = q->next; 		
				delete q;
			}else
				p = p->next;
		}
	cout << endl;
	for(DS *p = first; p != NULL; p = p->next)
	{
		cout << p->td.tentp << "(" << p->td.x << "," << p->td.y << ")" << endl;
	}
 int main()
{
//	first=FIFO();
  first=Xepbai();//sap xep 
	Xuat(first);
	DS *p=first;
	//Delete(first);
	   	/*cout<<"tp dau: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	   	p=last;
	   	cout<<"tp cuoi: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;*/
	//p=first;
	//if(p==NULL|p->next==NULL)
	/*while(p->next !=last){
		p=p->next;
			cout<<"tp gan cuoi: "<<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
		
	}*/
////In ra thanh pho thu i, i nhap tu ban phim
/*	int i;
	p = first;
	cin>>i;
	int count = 1;
	while(count != 1);
	{
		count ++;
		p= p->next;
	}
  	cout<<"tp thu  " << i<< " la: " <<p->td.tentp<<"("<<p->td.x<<","<<p->td.y<<")"<<endl;
	*/
}


///- Tao ds du lieu lay tu file, nhung sau tao xong thì ds dã sap xep theo tên thành pho

/*- Duy?t all các nút d?u th?a mãn di?u ki?n xóa (first->td.x>0 và first->td.x>0){
      P=first;
     First=first->next;
      Delete P;
}
- p=first;
Duyet tu  p den nút gan cuoi (p->next !=NULL)
        Neu( p->next->td.x>0 và p->next->td.y>0)
                Q=p->next ;// Q là nút c?n xóa
                 Doi lai lien ket va Xóa nút q
       N/lai: p=p->next
- Xuat danh sách*/
