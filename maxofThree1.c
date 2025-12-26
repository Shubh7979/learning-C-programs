#include<stdio.h>

int maxofthree()
{
	int a=10,b=25,c=15;
	
	if(a>b && b>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{
	printf("Max of three is:%d",maxofthree());
	return 0;
}
