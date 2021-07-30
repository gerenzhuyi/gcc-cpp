#include<stdio.h>

int main()
{
	char c;

	int zm=0,sz=0,kg=0,qt=0;

	printf("输入\n");

	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			zm++;
		}
		else if(c<='9'&&c>='0')
		{
			sz++;
		}
		else if(c==' ')
		{
			kg++;
		}
		else
		{
			qt++;
		};

	};

		printf("字母:%d 数字:%d  空格:%d  其他:%d\n",zm,sz,kg,qt);


return 0;
}
