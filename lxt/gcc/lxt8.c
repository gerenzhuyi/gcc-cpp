#include<stdio.h>

int main()
{
	int i1=1,i2=1,i=1;

	while(i<20)
	{
		i++;
		printf("%12d%12d",i1,i2);

		if(i%2==0){printf("\n");};

		i1=i1+i2;

		i2=i1+i2;

	
	};




return 0;
}
