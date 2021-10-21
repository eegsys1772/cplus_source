#include<stdio.h>
#include<string.h>
#include <conio.h>
struct taotaikhoan														
{
	char taikhoan[100];
	char matkhau[100];
};

struct dangnhap
{
	char taikhoan[100];
	char xacnhan[100];
};

struct sinhvien
{
	char hoten[30];
	char masv[20];
	char tienganh[100];
	char gioitinh[20];
	char khoahoc[100];
	char nganh[100];
	float c;
	float thinghiem1;
	float thinghiem2;
	float antoan;
	float toan;
	float gdtc;
	float gdqp;
	float thuctap;
	int moss;
	char passmoss[20];
	char passgdqp[20];
	char passgdtc[20];
	
};
struct timthongtin 
{
 char timkiemmasv[20];
};
struct mamonhoc
{
	char gdtc;
	char gdqp;
	char toan[6];
	char c;
	char thinghiem1;
	char thinghiem2;
	char antoan;
	char thuctap;
};
void khoitao(void);
void dangki(void);
void banglevel(void);
void nhapthongtin(void);
void nhapdiem(void);
void bangdiem(void);
void trungbinh(void);
void trungbinh8(void);
void datmonhoc(void);
void quamon(void);
void dungtiendo(void);
void tretiendo(void);
void timkiemthongtin(void);
void thongkediem(void);
void thoatCT(void);

int n;
int main () 
{
	int mucluc;
	khoitao();
	do
	{
		printf("\n");
		printf("\t Chao mung den voi chuong trinh quan ly sinh vien khoa Dien - Dien Tu \n");
		printf("\t\t\t    ??????????o0o???????????");
		printf("\n");
		printf("\n");
		printf("\t			  MENU CUA CHUONG TRINH");
		printf("\n   	  	    ??????????????????????????????????????????????????????????");
		printf("\n   		    ? 1.Dang nhap va nhap si so                              ?");
		printf("\n   		    ? 2.Bang level tieng anh                                 ?");
		printf("\n   		    ? 3.Nhap thong tin sinh vien                             ?");
		printf("\n   		    ? 4.Nhap diem mon hoc cua sinh vien                      ?");
		printf("\n   		    ? 5.Nhap nhung sinh vien dat mon hoc moss 2,gdqp,gdtc    ?");
		printf("\n   		    ? 6.Bang diem hoc tap cua sinh vien                      ?");
		printf("\n   		    ? 7.Diem trung binh cua sinh vien                        ?");
		printf("\n   		    ? 8.Danh sach sinh vien diem trung binh 8.0              ?");
		printf("\n   		    ? 9.Danh sach sinh vien dat moss 2,gdqp,gdtc             ?");
		printf("\n   		    ? 10.Danh sach sinh vien dat dung tien do tieng anh      ?");
		printf("\n   		    ? 11.Danh sach sinh vien khong dat dung tien do tieng anh?");
		printf("\n   		    ? 12.Tim kiem thong tin sinh vien                        ?");
		printf("\n   		    ? 13.Tim kiem diem sinh vien                             ?");
		printf("\n   		    ? 14.Thoat chuong trinh                                  ?");
		printf("\n   		    ??????????????????????????????????????????????????????????");
		printf("\n");
		printf("Moi ban nhap 1 so tu Menu chuong trinh: ");
		scanf("%d",&mucluc);
		printf("\n");
	switch (mucluc)
		{
			case 1: dangki();
					break;
			case 2: banglevel();
					break;		
			case 3: nhapthongtin();
					break;
			case 4: nhapdiem();
					break;
			case 5: datmonhoc();
					break;	
			case 6:	bangdiem();
					break;		
		    case 7: trungbinh();
		    		break;
			case 8:	trungbinh8();
					break;		
			case 9:	quamon();	
					break;	
			case 10:dungtiendo();
					break;
			case 11:tretiendo();
					break;	
			case 12:timkiemthongtin();
					break;
			case 13:thongkediem();
			     	break;		
			case 14:{
						thoatCT();
						return 0;
					}								
			default:printf("Lua chon trong 1-14! ");
			getch();
		}
	printf("\n");	
	}while (1);
}
void khoitao()
{
	n=0;
}
void dangki(void)
{	
	struct taotaikhoan tk;
	struct dangnhap dn;
	printf("  Hay Dang ki tai khoan truoc nhe!");
	printf("\n     ??????????o0o???????????");
	printf("\n");
	printf("Tai khoan ban muon tao: ");fflush(stdin);
	gets(tk.taikhoan);
	while (strlen(tk.taikhoan)==0)
	{
		printf("\tKhong duoc bo trong...!\n");
		getch();
		printf("\tMoi ban nhap tai khoan: ");fflush(stdin);
		gets(tk.taikhoan);
	}
	printf("Mat khau ban muon tao: ");fflush(stdin);
	gets(tk.matkhau);
	while (strlen(tk.matkhau)==0)
	{
		printf("\tKhong duoc bo trong...!\n");
		getch();
		printf("\tMoi ban nhap mat khau: ");fflush(stdin);
		gets(tk.matkhau);
	}
	printf("Hay xac nhan lai mat khau: ");fflush(stdin);
	gets(dn.xacnhan);
	while (strlen(dn.xacnhan)==0)
	{
		printf("\tKhong duoc bo trong...!\n");
		getch();
		printf("\tMoi ban xac nhan mat khau: ");fflush(stdin);
		gets(dn.xacnhan);
	}
	while (strcmp(tk.matkhau,dn.xacnhan)!=0)
	{
		printf("\tMat khau cua ban khong khop vui long kiem tra lai....!\n ");
		getch();
		printf("\tHay xac nhan lai mat khau: ");fflush(stdin);
		gets(dn.xacnhan);
	}
	getch();
	printf("\n   	  	    ??????????????????????????????????");
	printf("\n   		    ?       Dang Ki thanh cong       ?");
	printf("\n   		    ??????????????????????????????????");
	printf("\n");
	printf("  Hay dang nhap vao chuong trinh");
	printf("\n    ??????????o0o???????????");
	printf("\n");	
	printf("Tai khoan: ");fflush(stdin);
	gets(dn.taikhoan);
	do
	{
		if (strcmp(tk.taikhoan,dn.taikhoan)!=0)
		{
			printf("\tTai khoan dang nhap khong hop le...!\n");
			getch();
			printf("\tNhap lai tai khoan: ");fflush(stdin);
			gets(dn.taikhoan);
		}
	}while(strcmp(tk.taikhoan,dn.taikhoan)!=0);
 	printf("Mat khau: ");fflush(stdin);
	gets(tk.matkhau);
	while (strcmp(tk.matkhau,dn.xacnhan)!=0 )
	{
		printf("\tDang nhap khong hop le!\n");
		printf("\tMoi ban nhap lai mat khau....!\n");
		getch();
		printf("\tHay nhap lai mat khau: ");fflush(stdin);
		gets(tk.matkhau);
	}
	printf("\n   	  	    ??????????????????????????????????");
	printf("\n   		    ?     Dang nhap thanh cong       ?");
	printf("\n   		    ??????????????????????????????????");
	getch();
	printf("\n");
	printf("Nhap si so sinh vien:");
	scanf("%d",&n);
	do
	{
		if (n<=0)
		{
			printf("Nhap lai si so sinh vien: ");
			scanf("%d",&n);
		}
	}while(n<=0);
	printf("Chuc mung ban da hoan tat....!");
	getch();
}
void nhapthongtin(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
struct sinhvien sv[100];int i;
	for (i=0;i<n;i++)
	{
		printf("\n");
		printf("\tHay nhap thong tin cua sinh vien\n");
		printf("\t  ??????????o0o???????????");
		getch();
		printf("\n");
 		printf("Nhap ho va ten sinh vien thu %d: ",i+1);fflush(stdin);
 		gets(sv[i].hoten);
 		while (strlen(sv[i].hoten)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap ho va ten: ");fflush(stdin);
			gets(sv[i].hoten);
		}
		printf("Nhap ma so sinh vien thu %d: ",i+1);fflush(stdin);
		gets(sv[i].masv);
		while (strlen(sv[i].masv)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap ma sv: ");fflush(stdin);
			gets(sv[i].masv);
		}
		printf("Gioi tinh cua sinh vien thu %d: ",i+1);fflush(stdin);
		gets(sv[i].gioitinh);
		while (strlen(sv[i].gioitinh)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap gioi tinh: ");fflush(stdin);
			gets(sv[i].gioitinh);
		}
		printf("Trinh do tieng anh hien tai sinh vien thu %d: ",i+1);fflush(stdin);
		gets(sv[i].tienganh);
		while (strlen(sv[i].tienganh)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap tieng anh: ");fflush(stdin);
			gets(sv[i].tienganh);
		}
		printf("Khoa hoc hien tai cua sinh vien thu %d: ",i+1);fflush(stdin);
		gets(sv[i].khoahoc);
		while (strlen(sv[i].khoahoc)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap khoa hoc: ");fflush(stdin);
			gets(sv[i].khoahoc);
		}
		printf("Nganh cua sinh vien thu %d: ",i+1);fflush(stdin);
		gets(sv[i].nganh);
		while (strlen(sv[i].nganh)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap nganh: ");fflush(stdin);
			gets(sv[i].nganh);
		}
		
	}	
}
void banglevel(void)
{
		printf("\t                         LUU Y");
		printf("\n   	  	    ?????????????????????????????????????????????");
		printf("\n   		    ?TREN HOAC BANG TIENG ANH 3 LA DUNG TIEN DO ?");
		printf("\n   		    ?????????????????????????????????????????????");
		printf("\n");
		printf("\n   	  	    ????????????????");
		printf("\n   		    ? 1.DU BI 1    ?");
		printf("\n   		    ? 2.DU BI 2    ?");
		printf("\n   		    ? 3.DU BI 3    ?");
		printf("\n   		    ? 1.TIENG ANH 1?");
		printf("\n   		    ? 2.TIENG ANH 2?");
		printf("\n   		    ? 3.TIENG ANH 3?");
		printf("\n   		    ? 4.TIENG ANH 4?");
		printf("\n   		    ? 5.TIENG ANH 5?");
		printf("\n   		    ? 6.TIENG ANH 6?");
		printf("\n   		    ????????????????");
		getch();
}
void nhapdiem(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	struct sinhvien sv[100];int i;
	for (i=0;i<n;i++)
	{
		printf("\n");
		printf("\t%s\n",sv[i].hoten);
		printf("Diem gdtc: ");fflush(stdin);
		scanf("%f",&sv[i].gdtc);
		while (sv[i].gdtc<0 || sv[i].gdtc>10)
		{
			printf("Diem gdtc phai lon hon 0 va nho hon 10...!");
			getch();
			printf("Nhap lai diem gdtc: ");fflush(stdin);
			scanf("%f",&sv[i].gdtc);
		}
		printf("Nhap diem Toan1E2: ",sv[i].toan);fflush(stdin);
		scanf("%f",&sv[i].toan);
		while(sv[i].toan<0 || sv[i].toan>10)
		{
			printf("Diem Toan phai lon hon 0 va nho hon 10...!");
			getch();
			printf("Nhap lai diem Toan1E2: ");fflush(stdin);
			scanf("%f",&sv[i].toan);
		}
		printf("Nhap diem An toan dien: ");fflush(stdin);
		scanf("%f",&sv[i].antoan);
	while(sv[i].antoan<0 || sv[i].antoan>10)
		{
			printf("Diem An Toan Dien phai lon hon 0 va nho hon 10...!");
			getch();
			printf("Nhap lai diem An Toan Dien: ");fflush(stdin);
			scanf("%f",&sv[i].antoan);
		}
		printf("Nhap diem Gdqp: ");fflush(stdin);
		scanf("%f",&sv[i].gdqp);
		while(sv[i].gdqp<0 || sv[i].gdqp>10)
		{
			printf("Diem Gdqp phai lon hon 0 va nho hon 10...!");fflush(stdin);
			getch();
			printf("Nhap lai diem Gdqp: ");fflush(stdin);
			scanf("%f",&sv[i].gdqp);
		}
		printf("Nhap diem Thi nghiem dien tu: ");fflush(stdin);
		scanf("%f",&sv[i].thinghiem1);
		while(sv[i].thinghiem1<0 || sv[i].thinghiem1>10)
		{
			printf("Diem Thi nghiem dien tu phai lon hon 0 va nho hon 10...!");fflush(stdin);
			getch();
			printf("Nhap lai diem Thi nghiem dien tu: ");fflush(stdin);
			scanf("%f",&sv[i].thinghiem1);
		}
		printf("Nhap diem Thi nghiem mach dien: ");fflush(stdin);
		scanf("%f",&sv[i].thinghiem2);
		while(sv[i].thinghiem2<0 || sv[i].thinghiem2>10)
		{
			printf("Diem Thi nghiem mach dien phai lon hon 0 va nho hon 10...!");fflush(stdin);
			getch();
			printf("Nhap lai diem Thi nghiem mach diem: ");fflush(stdin);
			scanf("%f",&sv[i].thinghiem2);
	    }
	    printf("Nhap diem Thuc tap dien: ");fflush(stdin);
	    scanf("%f",&sv[i].thuctap);
	    while(sv[i].thuctap<0 || sv[i].thuctap>10)
	    {
	    	printf("Diem Thuc tap dien phai lon hon 0 va nho hon 10...!");fflush(stdin);
	    	getch();
	    	printf("Nhap lai diem Thuc tap dien: ");fflush(stdin);
	    	scanf("%f",&sv[i].thuctap);
	    }
	    printf("Nhap diem Moss 2: ");fflush(stdin);
		scanf("%d",&sv[i].moss);
	while(sv[i].moss<100 || sv[i].moss>1000)
		{
			printf("Diem moss 2 phai lon hon 100 va nho hon 1000...!");fflush(stdin);
			getch();
			printf("Nhap lai diem moss 2: ");
			scanf("%d",&sv[i].moss);
		}
		printf("Nhap diem C: ");fflush(stdin);
		scanf("%f",&sv[i].c);
		while(sv[i].c<0 || sv[i].c>10)
		{
			printf("Diem C phai lon hon 0 va nho hon 10...!");fflush(stdin);
			getch();
			printf("Nhap lai diem C: ");fflush(stdin);
			scanf("%f",&sv[i].c);
		}
	}
}	

void bangdiem(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	struct sinhvien sv[100];int i; 
	printf("\n\t                BANG DIEM HOC TAP KHOA DIEN - DIEN TU ");
	printf("\n	 ?????????????????????????????????????????????????????????????????????????");
   	printf("\n	 ?  MaSV     ?     Ten SV      ?  An toan dien ? Toan 1E2 ?  Lap trinh C ?");
   for (i=0;i<n;i++)
	{
	printf("\n	 ?????????????????????????????????????????????????????????????????????????");
	printf("\n	 ?%11s?%17s?%15.2f?%10.2f?%14.2f?",sv[i].masv,sv[i].hoten,sv[i].antoan,sv[i].toan,sv[i].c);
	}
   	printf("\n	 ?????????????????????????????????????????????????????????????????????????");
   	printf("\n");
	printf("\n\t            BANG DIEM HOC TAP MON GDQP VA GDTC KHOA DIEN - DIEN TU ");
	printf("\n	 ????????????????????????????????????????????????????????????????????????????????");
   	printf("\n	 ?  MaSV     ?     Ten SV      ?  Giao duc quoc phong ?    Giao duc the chat    ?");
   for (i=0;i<n;i++)
   
	{
	printf("\n	 ????????????????????????????????????????????????????????????????????????????????");
	printf("\n	 ?%11s?%17s?%22.2f?%25.2f?",sv[i].masv,sv[i].hoten,sv[i].gdqp,sv[i].gdtc);
	}
   	printf("\n	 ????????????????????????????????????????????????????????????????????????????????");
   	printf("\n");
   	printf("\n\t                    BANG DIEM CAC MON THUC HANH KHOA DIEN - DIEN TU ");
	printf("\n	 ????????????????????????????????????????????????????????????????????????????????????????????");
   	printf("\n	 ?  MaSV     ?     Ten SV      ?  Thi nghiem mach dien ? Thi nghiem dien tu? Thuc tap dien  ?");
   for (i=0;i<n;i++)
	{
	printf("\n	 ????????????????????????????????????????????????????????????????????????????????????????????");
	printf("\n	 ?%11s?%17s?%23.2f?%19.2f?%16.2f?",sv[i].masv,sv[i].hoten,sv[i].thinghiem1,sv[i].thinghiem2,sv[i].thuctap);
	
	}
   	printf("\n	 ????????????????????????????????????????????????????????????????????????????????????????????");
   	getch();
}
void trungbinh(void)
{
		if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	float trungbinh;
	struct sinhvien sv[100];int i; 
		printf("\n\t       BANG DIEM TRUNG BINH KHOA DIEN - DIEN TU ");
		printf("\n	 ??????????????????????????????????????????????????");
   		printf("\n	 ?  MaSV     ?     Ten SV      ? Diem trung binh  ?");
   for (i=0;i<n;i++)
	{
		trungbinh=(sv[i].antoan+sv[i].c+sv[i].thinghiem1+sv[i].thinghiem2+sv[i].thuctap+sv[i].toan)/6;
		printf("\n	 ??????????????????????????????????????????????????");
		printf("\n	 ?%11s?%17s?%18.2f?",sv[i].masv,sv[i].hoten,trungbinh);
	}
		printf("\n	 ??????????????????????????????????????????????????");
   	getch();
}
void trungbinh8()
{
	
		if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	float trungbinh;
	struct sinhvien sv[100];int i; 
			printf("\n\t     DANH SACH SINH VIEN 8.0 KHOA DIEN - DIEN TU ");
			printf("\n	 ??????????????????????????????????????????????????");
   			printf("\n	 ?  MaSV     ?     Ten SV      ? Diem trung binh  ?");
   for (i=0;i<n;i++)
	{
		trungbinh=(sv[i].antoan+sv[i].c+sv[i].thinghiem1+sv[i].thinghiem2+sv[i].thuctap+sv[i].toan)/6;
		if (trungbinh>=8)
		{
			printf("\n	 ??????????????????????????????????????????????????");
			printf("\n	 ?%11s?%17s?%18.2f?",sv[i].masv,sv[i].hoten,trungbinh);
		}
	}
			printf("\n	 ??????????????????????????????????????????????????");
   	getch();
}
void datmonhoc(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	printf("\t                         LUU Y");
		printf("\n   	  	    ?????????????????????????????");
		printf("\n   		    ? + Diem Moss 2 phai >= 500 ?");
		printf("\n   		    ? + Diem GDQP phai >=5      ?");
		printf("\n   		    ? + Diem GDTC phai >=5      ?");
		printf("\n   		    ?????????????????????????????");
		printf("\n");
	struct sinhvien sv[100];int i; 
	for (i=0;i<n;i++)
	{
		printf("\n");
		printf("\t%s\n",sv[i].hoten);
		printf("\n");
		printf("Diem mon moss 2: %d\n ",sv[i].moss);
		printf("Sinh vien dat hay khong dat: ");fflush(stdin);
		gets(sv[i].passmoss);
		while (strlen(sv[i].passmoss)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap dat hay khong dat: ");fflush(stdin);
			gets(sv[i].passmoss);
		}
		printf("\n");
		printf("Diem mon GDQP:  %0.2f\n ",sv[i].gdqp);
		printf("Sinh vien dat hay khong dat: ");fflush(stdin);
		gets(sv[i].passgdqp);
		while (strlen(sv[i].passgdqp)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap dat hay khong dat: ");fflush(stdin);
			gets(sv[i].passgdqp);
		}
		printf("\n");
		printf("Diem mon GDTC: %0.2f\n ",sv[i].gdtc);
		printf("Sinh vien dat hay khong dat: ");fflush(stdin);
		gets(sv[i].passgdtc);
		while (strlen(sv[i].passgdtc)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap dat hay khong dat: ");fflush(stdin);
			gets(sv[i].passgdtc);
		}
	}
	getch();
}
void quamon(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	struct sinhvien sv[100];int i; 
	printf("\n\t         DANH SACH SINH VIEN DAT MOSS 2, GDTC, GDQP ");
	printf("\n	 ??????????????????????????????????????????????????????????????");
   	printf("\n	 ?  MaSV     ?     Ten SV      ?   GDQP   ?   GDTC  ?  Moss 2 ?");
   for (i=0;i<n;i++)
	{
	
	printf("\n	 ??????????????????????????????????????????????????????????????");
	printf("\n	 ?%11s?%17s?%10s?%9s?%9s?",sv[i].masv,sv[i].hoten,sv[i].passgdqp,sv[i].passgdtc,sv[i].passmoss);
	}
   	printf("\n	 ??????????????????????????????????????????????????????????????");
   	getch();
}
void dungtiendo(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	struct sinhvien sv[100];int i;
	char s[]="tieng anh 3";
	printf("\t\tDANH SACH SINH VIEN DAT DUNG TIEN DO TIENG ANH");
	printf("\n");
	for (i=0;i<n;i++)
	{
		if (strcmp(sv[i].tienganh,s)==1 || strcmp(sv[i].tienganh,s)==0)
		{
			printf("\t%s\n",sv[i].hoten);
		}

	}
	getch();
}
void tretiendo(void)
{
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	struct sinhvien sv[100];int i;
	char s[]="tieng anh 3";
	printf("\t\tDANH SACH SINH VIEN KHONG DAT DUNG TIEN DO TIENG ANH");
	printf("\n");
	for (i=0;i<n;i++)
	{
		if (strcmp(sv[i].tienganh,s)==-1 )
		{
			printf("\t%s\n",sv[i].hoten);
		}

	}
	getch();
}
void timkiemthongtin(void)
{   
	
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan.....!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	printf("\n   	  	    ??????????????????????????????????");
	printf("\n   		    ?     Thong tin cua sinh vien    ?");
	printf("\n   		    ??????????????????????????????????");
	struct sinhvien sv[100]; 
	printf("\n\t           MA SV BAN DA NHAP");
	printf("\n	 ???????????????????????????????????????");
	printf("\n	 ?     Ten SV      ? Ma SV ban da nhap ?");
	int i;
	for (i=0;i<n;i++)
	{
	printf("\n	 ???????????????????????????????????????");
	printf("\n	 ?%17s?%19s?",sv[i].hoten,sv[i].masv);
	}
   	printf("\n	 ???????????????????????????????????????");
	getch();
	printf("\n");
	struct timthongtin checkmasv;
	int timkiem,mucluc;
	printf("\n");
		printf("Moi ban nhap ma sv de tim kiem: ");fflush(stdin);
		gets(checkmasv.timkiemmasv);
		while (strlen(checkmasv.timkiemmasv)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap ma sv de tim kiem: ");fflush(stdin);
			gets(checkmasv.timkiemmasv);
		}
	for (i=0;i<n;i++)
	{	
		if (strcmp(checkmasv.timkiemmasv,sv[i].masv)==0)
		{
			printf("Ho va ten: %s\n",sv[i].hoten);
			printf("Ma sv: %s\n",sv[i].masv);
			printf("Gioi tinh: %s\n",sv[i].gioitinh);
			printf("Level tieng anh: %s\n",sv[i].tienganh);
			printf("Khoa hoc: %s\n",sv[i].khoahoc);
			printf("Nganh: %s\n",sv[i].nganh);
		}
	}
	getch();
}
void thongkediem(void)
{
		
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan.....!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	if (n==0) 
	{
	  printf("\t\t Ban chua dang nhap tai khoan.....!\n");
	  getch();
	  printf("\t\t Nhan vao so 1 de tao tai khoan va dang nhap nhe....!");
	  getch();
	}
	printf("\n   	  	    ??????????????????????????????????");
	printf("\n   		    ?       Diem cua sinh vien       ?");
	printf("\n   		    ??????????????????????????????????");
	struct sinhvien sv[100]; 
	printf("\n\t           MA SV BAN DA NHAP");
	printf("\n	 ???????????????????????????????????????");
	printf("\n	 ?     Ten SV      ? Ma SV ban da nhap ?");
	int i;
	for (i=0;i<n;i++)
	{
	printf("\n	 ???????????????????????????????????????");
	printf("\n	 ?%17s?%19s?",sv[i].hoten,sv[i].masv);
	}
   	printf("\n	 ???????????????????????????????????????");
	getch();
	printf("\n");
	struct timthongtin checkmasv;
	int timkiem,mucluc;
	printf("\n");
		printf("Moi ban nhap ma sv de tim kiem: ");fflush(stdin);
		gets(checkmasv.timkiemmasv);
		while (strlen(checkmasv.timkiemmasv)==0)
 		{
 			printf("\tKhong duoc bo trong...!\n");
			getch();
			printf("\tMoi ban nhap ma sv de tim kiem: ");fflush(stdin);
			gets(checkmasv.timkiemmasv);
		}
	for (i=0;i<n;i++)
	{	
		if (strcmp(checkmasv.timkiemmasv,sv[i].masv)==0)
		{
			printf("\n");
			printf("\t%s\n",sv[i].hoten);
			printf("GDTC: %0.2f\n",sv[i].gdtc);
			printf("Toan 1E2: %0.2f\n",sv[i].toan);
			printf("An toan dien: %0.2f\n",sv[i].c);
			printf("GDQP: %0.2f\n",sv[i].gdqp);
			printf("Thi nghiem dien tu: %0.2f\n",sv[i].thinghiem1);
			printf("Thi nghiem mach dien: %0.2f\n",sv[i].thinghiem2);
			printf("Thuc tap dien: %0.2f\n",sv[i].thuctap);
			printf("Moss 2: %0.2f\n",sv[i].moss);
			printf("Lap trinh C: %0.2f\n",sv[i].c);
		}
	
	}
	getch();
}
void thoatCT(void)
{
   
   printf("\n");
   printf("\n  Cam on da su dung chuong trinh cua chung toi!");
   
   getch();
}

	

