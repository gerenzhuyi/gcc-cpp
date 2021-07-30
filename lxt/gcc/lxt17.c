#include<stdio.h>


int main()
{
	int s=0,x,i=1;

	x=1;

	while(i<10)
	{
		s = (x+1)*2;

		x = s;

		i++;
	
	}
	
	printf("%d\n",s);



return 0;
}
