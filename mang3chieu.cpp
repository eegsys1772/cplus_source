#include<stdio.h> 
int main(){
int a[5][5][3];
int sosv=2;
int somon=3;
int cotdiem=2;
for(int i=0;i<sosv;i++)
for(int j=0;j<somon;j++)
  for(int x=0;x<cotdiem;x++){
printf("Nhap diem cho sv %d mon %d cot diem: %d là:  ",i,j,x);
scanf("%d",&a[i][j][x]);
}
for(int i=0;i<sosv;i++)
 for(int j=0;j<somon;j++){
printf("\n Diem cua sv %d mon %d: ",i,j);
for(int x=0;x<cotdiem;x++){
	printf("%d ",a[i][j][x]);
}
   }
   // nhap vào stt cua 1 SV -> in ra bang diem cua sv do
 /*  scanf("%d",k);
			for(int i=0;i<sosv;j++) {
				printf("%d ",a[k]//a[i][j][x]);
			}	
	printf("\n");
		for(int j=0;j<somon;j++) {
			for(int x=0;x<cotdiem;x++){
		printf("%d ",a[i][j][x]);
		} */
		 int n;
   // nhap vào stt cua 1 SV -> in ra bang diem cua sv do
   printf("\n nhap stt sinh vien ");scanf("%d",&n);
   for(int j=0;j<somon;j++){
printf("\n Diem cua sv %d mon %d: ",n,j);
for(int x=0;x<cotdiem;x++){
	printf("%d ",a[n][j][x]);
}
}
}

