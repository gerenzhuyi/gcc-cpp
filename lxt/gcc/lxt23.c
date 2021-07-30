
#include<stdio.h>

int main()
{
	int i;

	int dghs(int o);

	for(i=0;i<=10;i++)
	{
		printf("%d--%d\n",i,dghs(i));
	
	};



return 0;
}


int dghs(int o)
{	
	int jg;

	if(o==0)
	{
		jg =1;
	}
	else
	{
		jg =o*dghs(o-1);

	
	};

	return jg;
}
