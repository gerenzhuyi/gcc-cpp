#include<stdio.h>

int main()
{
	int a,b,c;

	for(a=0;a<=3;a++)
	{
		for(b=0;b<=2-a;b++)
		{
			printf(" ");
		};

		for(c=0;c<=2*a;c++)
		{
			printf("*");
		};




		printf("\n");
	};

	for(a=0;a<=2;a++)
	{

		for(b=0;b<=a;b++)
		{
			printf(" ");
		};

		for(c=0;c<=4-2*a;c++)
		{
			printf("*");
		};

		printf("\n");
	
	};


return 0;
}
