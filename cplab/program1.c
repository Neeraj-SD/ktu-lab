#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three distinct numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is the largest\n",a);
		else
			printf("%d is the largest\n",c);
	}
	else
	{
		if(b>c)
			printf("%d is the largest\n",b);
		else
			printf("%d is the largest\n",c);
	}
}



