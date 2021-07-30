#include<stdio.h>

int main()
{
	
	int jf,cf;

	double f1=1,f2=0,f3=1,f4=0;

	for(jf=1;jf<=50;jf++)
	{
		f1=f1+jf;

		f2=f2+f1;
	};

	for(cf=1;cf<=50;cf++)
	{
		f3 = f3*cf;

		f4 = f4+f3;
	};

	printf("加法累加:%lf\n乘法累加:%lf\n",f2,f4);


return 0;
}
