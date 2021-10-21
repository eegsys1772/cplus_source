//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//
//int KiemTra(char *sdt)
//{
//	int i = 0;
//
//	for(; i < strlen(sdt); i++)
//	{
//		if(sdt[i] != '0' && sdt[i] != '1' && sdt[i] != '2' && sdt[i] != '3' 
//		&& sdt[i] != '4' && sdt[i] != '5' && sdt[i] != '6' && sdt[i] != '7' 
//		&& sdt[i] != '8' && sdt[i] != '9') 
//		{
//			printf("So dien thoai nhap sai");
//			return 1;
//			break;
//		}
//	}
//
//	return 0;
//}
//
//void DocSo(char *sdt)
//{
//	int i = 0;
//	
//	if(KiemTra(sdt) == 0)
//	{
//		for(; i < strlen(sdt); i++)
//		{
//			switch(sdt[i])
//			{
//				case '0':
//					printf(" khong ");
//					break;
//
//				case '1':
//					printf(" mot ");
//					break;
//
//				case '2':
//					printf(" hai ");
//					break;
//
//				case '3':
//					printf(" ba ");
//					break;
//
//				case '4':
//					printf(" bon ");
//					break;
//				case '5':
//					printf(" nam ");
//
//				case '6':
//					printf(" sau ");
//					break;
//
//				case '7':
//					printf(" bay ");
//					break;
//				case '8':
//					printf(" tam ");
//
//				case '9':
//					printf(" chin ");
//					break;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char sdt[11];
//
//	printf("Nhap sdt: ");
//	fflush(stdin);
//	gets(sdt);
//
//	DocSo(sdt);
//
//	getch();
//	return 0;
//}

#include <iostream>
#include <cstring>
using namespace std;
int main() {
  //kh?i t?o hai bi?n str1 và str2 v?i n?i dung nh?t ð?nh
  char str1[] = "Xin chao cac ban !!";
  char str2[] = "Chao mung cac ban da den ";
  //s? d?ng hàm strlen() ð? ð?m ð? dài c?a hai chu?i str1 và str2 r?i gán cho bi?n len1 và len2
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  //hi?n th? k?t qu? ra màn h?nh
  cout << "do dai cua chuoi \""<<str1<<"\" là " << len1 << endl;
  cout <<  \""<<str2<<"\" là " << len2 << endl;
 
  cout<<"\n-----------------------------------\n";
  cout<<"Chýõng tr?nh này ðý?c ðãng tai Freetuts.net";
}
