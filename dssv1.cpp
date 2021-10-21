#include <iostream>
#include <stdio.h>
#include <string>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Khoa{
 string tenkhoa;
 string diachi;
};
 
struct Sinhvien{
 string masv;
 string hoten;
 float dtb;
 Sinhvien *next;
}*firstsv,*lastsv,*psv;
 
struct DS{
 	Khoa khoa;
 	Sinhvien *sv;
 	DS *next;
 } *first,*last;
 struct tk{
 	string tenkhoa;
 	int sosv;
 	tk* next;
 }*firsttk;
 
 void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}

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

DS *DSLK(){
	FILE * f=fopen("dslkda.txt","r");
	first = NULL;
while(!feof(f)){
	DS *p = new DS;
 	char tk[50];
  	fgets(tk,100,f);
 	tk[strlen(tk)-1]='\0';
 	p->khoa.tenkhoa = tk;
 	char dc[50];
  	fgets(dc,100,f);
 	dc[strlen(dc)-1]='\0';
 	p->khoa.diachi = dc;
 	firstsv = NULL;
	while(1){
		Sinhvien *psv= new Sinhvien;
 		char masv[50];	//fflush(stdin);
	 	fgets(masv,100,f);
	 	masv[strlen(masv)-1]='\0';
	 	string ma=masv;
	 	if(strlen(masv)==0||feof(f)) break;
		psv->masv = masv; 
  		char ht[50];//	fflush(stdin);
	 	fgets(ht,100,f);
	 	ht[strlen(ht)-1]='\0';	 	
	 	psv->hoten = ht;	 		
	 	char dtb[50];//	fflush(stdin);
	 	fgets(dtb,100,f);
	 	dtb[strlen(dtb)-1]='\0';
    	float d= atof(dtb);//doi chuoi ra so
		psv->dtb = d;
		psv->next = NULL;
		//noi ds sv	
		psv->next = firstsv;
		firstsv=psv;
	  }
	  p->sv = firstsv;
	  p->next = first;
	  	first = p;
	  cout<<endl;
 }
 	 
	 fclose(f);
	 return first;
}

 void cau1(){
 	for(DS *p=first;p!=NULL;p=p->next){
 		cout<<p->khoa.tenkhoa<<" Dia chi: "<<p->khoa.diachi<<endl;
 		cout<<"Danh sach sinh vien cua Khoa:"<<p->khoa.tenkhoa<<endl;
 		 for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
 		   cout<<"Masv: "<<s->masv<<" Ten: "<<s->hoten<<" Diem: "<<s->dtb<<endl;
 		cout<<endl;	 
	 }
 	   
 }
 
void cau3(string nhap){
	int kt=0;
 	for(DS *p=first;p!=NULL;p=p->next){
 		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
	 	if(s->masv==nhap){
 			cout<<"Sinh vien thuoc khoa:"<<p->khoa.tenkhoa<<endl;
 		    cout<<"Masv: "<<s->masv<<"\nTen: "<<s->hoten<<"\nDiem: "<<s->dtb<<endl;
 		    kt++;
		 }	 		
	 }
	 if(kt==0) cout<<"Khong co ma sinh vien nay!";	
 }
 
 void cau2(string nhap){
	int dem=0;
	int kt=0;
 	for(DS *p=first;p!=NULL;p=p->next){
 		if(p->khoa.tenkhoa==nhap){
 			cout<<"Danh sach sinh vien cua Khoa:"<<p->khoa.tenkhoa<<endl;
 			for(Sinhvien *s=p->sv;s!=NULL;s=s->next){
 		    cout<<"Masv: "<<s->masv<<" Ten: "<<s->hoten<<" Diem: "<<s->dtb<<endl;
 		  			dem++; 
 		  			kt++;
 			}
		 }	 	
	 }
	 if(kt==0) cout<<"Khong co khoa nay trong danh sach!\n";
	 cout<<"Khoa co: "<<dem<<" sinh vien"<<endl;
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
	cout<<"Khoa CNTT"<<" co: "<<dem<<" sinh vien"<<endl;
	cout<<"Khoa TOAN"<<" co: "<<dem1<<" sinh vien"<<endl;	
	cout<<"Khoa NN"<<" co: "<<dem2<<" sinh vien"<<endl;		
}

void cau5(string nhap){
	int kt=0;
	for(DS *p=first;p!=NULL;p=p->next){
		if(p->khoa.tenkhoa==nhap){
			for(Sinhvien *s=p->sv;s!=NULL;){
				Sinhvien *x; 
				x = s;
				s= s->next;
				delete x;			
 			}
 			p->sv=NULL;
 			kt++;
		}
	}
	if(kt==0) cout<<"Khong co ma khoa nay trong danh sach!";
	else{
		cout<<"Danh sach sau khi xoa"<<endl;
		for(DS *p=first;p!=NULL;p=p->next){
			cout<<p->khoa.tenkhoa<<endl;
		for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
				cout<<p->khoa.tenkhoa<<" Masv: "<<s->masv<<" Ten: "<<s->hoten<<" Diem: "<<s->dtb<<endl;		
		}
	}
}

DS *cau6(string k,string ma,string ten, float d){
	int kt=0;
	for(DS *p=first;p!=NULL;p=p->next){

			if(k==p->khoa.tenkhoa){	
			Sinhvien *x =new Sinhvien;	
			x->masv=ma;
			x->hoten=ten;
			x->dtb=d;
			x->next=NULL; 
				kt=1;
				x->next=p->sv;
				p->sv=x;
				
				break;	
			}	

	}if(kt!=1) cout<<"Khong tim thay ten khoa!"<<endl;
cout<<"Danh sach sau khi them"<<endl;
		for(DS *p=first;p!=NULL;p=p->next){
			cout<<"Khoa "<<p->khoa.tenkhoa<<endl;
			for(Sinhvien *s=p->sv;s!=NULL;s=s->next)
				cout<<p->khoa.tenkhoa<<" Masv: "<<s->masv<<" Ten: "<<s->hoten<<" Diem: "<<s->dtb<<endl;		
		}
}
void DeleteDtbBang0(){
	for(DS *p=first;p!=NULL;p=p->next){
		for(Sinhvien *q=p->sv;q!=NULL;q=q->next){
			if(q->dtb==0){
				Sinhvien *i=p->sv;
				while(p->sv->dtb==0){
					
					
					Sinhvien *xoa=p->sv;
					p->sv=p->sv->next;
					delete xoa;
				
			}
				while(i->next!=NULL){
					if(i->next->dtb==0 ){
						Sinhvien *q= i->next;
						i->next=q->next; //xoa 1 pt
					}
					else
					i=i->next;
			
			}
		}
	}
}
}

int main(){
	int key;
	string khoa,sv,xoa;
	string k, ma,ten;
	float d;
	while(true) {
        cout << " \t QUAN LY KHOA VA THONG TIN SINH VIEN \n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Hien thi khoa va danh sach sinh vien cua khoa         	\n";
        cout << "**  2. Nhap vao ten khoa, hien thi danh sach sinh vien			\n";
        cout << "**  3. Nhap vao ten sv, hien thi thong tin cua sv do			\n";
        cout << "**  4. Thong ke moi khoa co bao nhieu sinh vien				\n";
        cout << "**  5. Xoa thong tin cua mot sinh vien theo yeu cau			\n";
        cout << "**  6. Them moi mot sinh vien								    \n";
        cout << "**  7. Xoa tat ca sinh vien co diem tb tren 0				    \n";
        cout << "**  0. Thoat                                         			\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch(key){
        	case 1:
                cout << "\t========== 1.HIEN THI DANH SACH KHOA VA SINH VIEN CUA KHOA ==========\n";
               // printLine(100); 
                first = DSLK();
                cau1();
                //printLine(100); 
                pressAnyKey();
                break;
            case 2:
                cout<<"\t========== 2.NHAP VAO KHOA, HIEN THI THONG TIN CAC SV CUA KHOA ==========";
               // printLine(100); 
				cout<<"\nNhap ten khoa: ";
				cin>>khoa;
				cau2(khoa);
			//	printLine(100); 
                pressAnyKey();
                break;
            case 3:
                cout<<"\t========== 3.NHAP VAO TEN SV, HIEN THI THONG TIN CUA SV ==========\n";
               // printLine(100);
                cout<<"\nNhap ma sinh vien: ";
                cin>>sv;
            	cau3(sv);
			//	printLine(100);
                pressAnyKey();
                break;
            case 4:
            	cout<<"\t========== 4.THONG KE MOI KHOA CO BAO NHIEU SINH VIEN ==========\n";
            	//printLine(100); 
            	cau4();
            	//printLine(100); 
                pressAnyKey();
                break;
            case 5:
                cout<<"\t========== 5.XOA THONG TIN CUA TOAN BO SV MOT KHOA THEO YEU CAU ==========";
                //printLine(100); 
               	cout<<"\nNhap ten Khoa muon xoa thong tin: ";
               	cin>>xoa;
               	cau5(xoa);
               	//printLine(100); 
                pressAnyKey();
                break;
            case 6:
            	cout<<"\t========== 6.THEM SINH VIEN VAO MOT KHOA ==========\n";
                //printLine(100);
            	cout<<"Nhap ten khoa cua sinh vien: ";
				cin>>k;
				cout<<"Nhap ma sinh vien: ";
				cin>>ma;
				cout<<"Nhap ten sinh vien: ";
				cin>>ten;
				cout<<"Nhap diem trung binh: ";
				cin>>d;
				cau6(k,ma,ten,d);
				//printLine(100); 
                pressAnyKey();
                break;
            case 7:
            	cout<<"\t========== 7.XOA TAT CA SINH VIEN CO DIEM TRUNG BINH 0 ==========\n";
                //printLine(100);
            	DeleteDtbBang0();
            	cout<<"Danh sach sau khi da xoa sinh vien co diem tb bang 0"<<endl;
            	cau1();
				//printLine(100); 
                pressAnyKey();
                break;    
            case 0:
                cout << "\nBan da chon thoat chuong trinh!";
                getch();
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nHay chon chuc nang trong hop menu.";
                pressAnyKey();
                break;
        }
    }
}




