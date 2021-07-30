#include<stdio.h>

int main()
{
	int i;

	char c;

	scanf("%d",&i);

	c = (i>=90) ? 'a':((i>=60) ? 'b' : 'c');

	printf("%c\n",c);
	


return 0;
}
