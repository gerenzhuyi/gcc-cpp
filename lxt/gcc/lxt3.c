#include<stdio.h>

int main()
{
	int n,y,r,jg;

	int b;

	puts("输入年月日");

	scanf("%d,%d,%d",&n,&y,&r);

	switch (y)
	{
		case 1: jg = 0;break;

		case 2: jg = 31;break;

		case 3: jg = 59;break;

		case 4: jg = 90;break;

		case 5: jg = 120;break;

		case 6: jg = 151;break;

		case 7: jg = 181;break;

		case 8: jg = 212;break;

		case 9: jg = 243;break;

		case 10: jg = 273;break;

		case 11: jg = 304;break;

		case 12: jg = 334;break;

	
	}

	jg = (jg+r);

	if(n%400==0||(n%4==0&&n%100!=0))
	{
		b=1;	

		puts("有论年了");
	}
	else
	{
		b=0;
	};

	if(b==1&&y>2){jg++;};

	printf("一年的第:%d天\n",jg);


return 0;
}
