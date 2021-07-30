#include<stdio.h>

int main()
{
	int nf,i;

	nf =1990;

	i=0;

	while(i<10){
	
		if(nf%400==0||(nf%4==0&&nf%100!=0)){
			printf("%d\n",nf);

			i++;
		};

		nf++;
	}


return 0;
}
