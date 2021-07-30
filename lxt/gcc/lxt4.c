#include<stdio.h>

int main()
{
	int i1,i2,i3,i;
	
	scanf("%d,%d,%d",&i1,&i2,&i3);

	if(i1>i2){
		i=i1;

		i1=i2;
		
		i2=i;
	};

	if(i1>i3)
	{

		i=i1;

		i1=i3;

		i3=i;
	};

	if(i2>i3){

		i=i2;
		i2=i3;
		i3=i;
	};

	printf("%d,%d,%d\n",i1,i2,i3);




return 0;
}
