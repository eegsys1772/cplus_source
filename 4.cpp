#include <cstdlib>
#include <ctime>
#include <stdio.h>
int KiemTra(int sx){
	FILE *f=fopen("sx.txt","r");
	if(f==NULL){
		return 1; fclose(f);
	}
	int tam;
	while (!feof(f)){
		fscanf(f,"%d",&tam);
	//	printf("%d\n",tam);
		if(tam==sx) {
			fclose(f);return 0;
		}
	}
	fclose(f);return 1;
}
int main()
{

  srand(time(NULL)); 
  while(1){
	printf("Nhan Enter de lay, ESC de thoat: ");
	if(getch()==27) return 0;
	int sx = rand() % 10000;
	while (KiemTra(sx)==0){
		sx = rand() % 10000;
	}
	printf("So xe cua ban: %d",sx);
	FILE *f=fopen("sx.txt","a");
	//nhap ho ten
	fprintf(f,"%d\n",sx);
	fclose(f);
     } 
}

