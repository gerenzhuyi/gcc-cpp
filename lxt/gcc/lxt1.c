#include<stdio.h>

int main()
{

	int b,s,g;

	printf("\n");

	for(b=1;b<5;b++)
	{
		for(s=1;s<5;s++)
		{
			for(g=1;g<5;g++)
			{
				if(g!=b&&s!=b&&s!=g)
				{
					printf("%d,%d,%d\n",b,s,g);
				};
			}
		}
	}

return 0;
}
