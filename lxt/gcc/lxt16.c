#include<stdio.h>

#define m 100

int main()
{
	float zm,hm;
	
	zm=hm=m;
	
	hm = hm/2;	

	for(int i=0;i<=10;i++)
	{
		zm = zm+2*hm;

		hm=hm/2;



	}

	printf("zm:%f hm:%f",zm,hm);

return 0;
}
