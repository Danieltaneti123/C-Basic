#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,que,rem;
	a=10;
	b=2;
	sum = (a+b);
	sub = (a-b);
	mul = (a*b);
	que = (a/b);
	rem = (a%b);
	
	
	printf("sum of %d and %d is = %d\n",a,b,sum);
	printf("sub of %d and %d is = %d\n",a,b,sub);
	printf("mul of %d and %d is = %d\n",a,b,mul);
	printf("quotient of %d and %d is = %d\n",a,b,que);
	printf("reminder of %d and %d is = %d\n",a,b,rem);
}
