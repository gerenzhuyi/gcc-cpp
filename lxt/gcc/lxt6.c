#include<stdio.h>

int main()
{
	int sw,gw,jg;

	for(sw=1;sw<10;sw++){
		
		for(gw=1;gw<=sw;gw++){
		
			jg = sw * gw;

			printf("%d * %d = %-3d",sw,gw,jg);
		};

		printf("\n");
	};


return 0;
}
