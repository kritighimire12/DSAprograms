#include<stdio.h>
int fibo(int);
int main()
{
	int n;
	printf("enter the number of terms:\n");
	scanf("%d",&n);
	if(n<0){
		printf("entered number is negative");
	}
	printf("the required fibonacci number is %d",fibo(n));
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	return fibo(n-1)+fibo(n-2);
}
