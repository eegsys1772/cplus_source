/*#include<stdio.h>

int main() {

   FILE* f1 = fopen("tam1.txt", "r");
   if (f1 == NULL) {
      printf("Khong mo duoc file");
      return 0;
   }

   FILE* f2 = fopen("tam2.txt", "w");
   if (f2 == NULL) {
      printf("Khong mo dudoc file");
      fclose(f1);
      return 0;
   }
	char p;
   do {
      p = fgetc(f1);
      fputc(p, f2);
   } while (p != EOF);

   return(0);
}*/
#include<stdio.h>
#include<conio.h>
#include<string>
int main(){
    FILE* f= fopen("baitap1.cpp","r");//Mo file de doc
    if(f==NULL){//ko mo duoc
    	printf("Bo tay"); return 0;
	}
	int d=0;
	int i;
	scanf("%d",&i);
	while(!feof(f)){//duyet tu dau den cuoi file
	    char tam[255];
	    fgets(tam,255,f);
		d++;
		if(d==i){
			printf("%d",d);
			printf("%s",tam);
			return 0;
		}
//	printf("\nSo dong: %d",d-1);
	//dong file
}
fclose(f);
}
