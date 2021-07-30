#include<stdio.h>

int main()
{
	int i,o;

	for(i=0;i<8;i++)
	{
		for(o=0;o<8;o++)
		{
			if((i*o)%2==0){
				printf("%c%c",219,219);
			}
			else{printf(" ");};
		}

		printf("\n");


	}	


return 0;
}
