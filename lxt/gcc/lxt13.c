#include<stdio.h>

int main()
{
	int a,b,cs,ys;

	scanf("%d %d",&a,&b);

	if(a<b){int i=0; i=a;a=b;a=i;};

	ys=a%b;

	cs=a*b;

	while(ys!=0)
	{
		a=b;
		b=ys;
		ys=a%b;
	};

	printf("%d %d\n",b,cs/b);

return 0;
}
