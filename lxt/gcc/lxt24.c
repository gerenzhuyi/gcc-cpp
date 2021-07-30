#include<stdio.h>

int main()
{
	int i=5;

	void fxhs(int n);

	printf("输入五个字符\40: \40");

	fxhs(i);

	printf("\n");



return 0;
}

//==================================================

void fxhs(n)

int n;

{
	char c;

	if(n<=1){
		c=getchar();

		printf("反转字符\40:\40");

		putchar(c);

	}
	else{
		c=getchar();

		fxhs(n-1);

		putchar(n);
	};


}

