#include<stdio.h>
int main()
{
	int a=7,b=18;
	printf("Before Swapping a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping a=%d,b=%d\n",a,b);
return 0;
}
