#include<stdio.h>

int main()
{
	int i,i1,i2,i3;

	for(i=100;i<1000;i++)
	{
		i1 = i%10;

		i2 = i/10%10;

		i3 = i/100%10;

		if(i==(i1*i1*i1+i2*i2*i2+i3*i3*i3)){printf("%d\n",i);};


	};


return 0;
}
