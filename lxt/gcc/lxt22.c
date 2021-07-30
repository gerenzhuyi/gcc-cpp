#include<stdio.h>

int main()
{
	int i,o;

	float a,b,lj,jg=0;

	a=2;
	b=1;

	for(i=1;i<=20;i++)
	{
		jg = jg+a/b;

		o=a;
		
		a= a+b;
		
		b=o;	
	};	
	
		printf("%f\n",jg);

return 0;
}
