#include<stdio.h>
int power(int b, int p)
{
	if(p==0)
	return 1;
	else
	return(b*power(b,p-1));
}
int main()
{
	int b;
	int p;
	int result;
	printf("ENTER THE BASE NUMBER");
	scanf("%d",&b);
	printf("ENTER THE POWERING NUMBER");
	scanf("%d",&p);
	result= power(b,p);
	printf("%d^%d=%d", b,p,result);
	
	
}