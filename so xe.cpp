/*#include <cstdlib>
#include <ctime>
#include <stdio.h>
int main()
{
	srand(time(NULL));
	int n = rand() ;
	printf("%d\n",RAND_MAX);
	printf("%d",n);
}*/

/////
#include <cstdlib>
#include <ctime>
#include <stdio.h>
int main()
{
	srand(time(NULL)); 
	
	while(true){
		int sx=rand()%10000;
		int dv=sx%10;
		int c=sx/10%10;
		int t=sx/100%10;
		int n=sx/1000;
		if((n+t+c+dv)%10 ==9)
		printf("%d%d%d%d",n,t,c,dv); break;
	}
}

