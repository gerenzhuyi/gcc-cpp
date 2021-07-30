#include<stdio.h>

int main()
{
	int n,k;

	printf("输入\n");

	scanf("%d",&n);

	printf("%d=",n);

	for(k=2;k<=n;k++)
	{
		while(n%k==0)
		{
			printf("%d",k);

			n/=k;

			if(n!=1)
			{
				printf("*");
			};
		};

	};
	printf("\n");

return 0;
}
