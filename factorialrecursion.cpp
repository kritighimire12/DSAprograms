#include<stdio.h>
int factorial(int n);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("the factorial of %d is %d",n,factorial(n));
	return 0;
}
int factorial(int n){
	int f;
	if(n==0)
	{
		return 1;
	}
	else{
		f=n*factorial(n-1);
			
	}
	return f;
}
