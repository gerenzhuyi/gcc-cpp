#include<stdio.h>

int main()
{

	int jg=0,ds,cs,i;

	scanf("%d %d",&ds,&cs);

	i=ds;

	while(cs>0)
	{
		jg += i;
		
		ds = ds*10;

		i += ds;

		cs--;
	};
	

	printf("%d\n",jg);

return 0;
}
