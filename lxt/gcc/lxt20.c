#include<stdio.h>

int main()
{
	int a,b=3,c=0,d,e;

	for(a=0;a<=3;a++)
	{
		for(d=0;b>=d;d++)
		{
			printf(" ");
		};
		
		for(e=0;c>=e;e++)
		{
			printf("*");
		};

		b--;

		c=c+2;

		printf("\n");


	};

	b=1;
	c=0;

	for(a=0;a<=3;a++)
	{

		for(d=0;d<=b;d++)
		{
			printf(" ");
		};

		for(e=4;e>=c;e--)
		{
			printf("*");
		};


		printf("\n");

		c=2+c;
		b++;

	};


	


return 0;
}
