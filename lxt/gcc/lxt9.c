#include<stdio.h>

int main()
{
	int i,o;

	int jg =0;

	for(i=101;i<200;i++)
	{
		for(o=2;o<i;o++)
		{
			if(i%o==0){break;};
		};
	

	if(o>=i)
	{

		jg++;

		printf("  %d  ",i);

		if(jg%5==0){
			printf("\n");
		};
	};
	};

return 0;
}
