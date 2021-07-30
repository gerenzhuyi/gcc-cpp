#include<stdio.h>

int main()
{
	double sr,sc,i1,i2,i3;

	scanf("%lf",&sr);

	i1 = 1000*0.01;

	i2 = i1 + 1000*0.04;

	i3 = i2 + 2000*0.06;

	if(sr<1000)
	{
		sc = sr*0.005;
	}	
	else if(sr<2000)
	{
		sc = i1+(sr-1000)*0.01;
	}
	else if(sr<4000)
	{
		sc = i2+(sr-2000)*0.2;
	}
	else if(sr<6000)
	{
		sc = i3+(sr-4000)*0.3;
	};

	printf("%lf\n",sr);

	printf("%lf\n",sc);







return 0;
}
