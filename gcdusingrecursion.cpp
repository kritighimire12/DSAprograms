#include<stdio.h>
int gcd(int,int);
int main(){
	int a,b;
	printf("enter the two numbers?\n");
	scanf("%d%d",&a,&b);
	printf("the gcd of two numbers %d,%d is %d",a,b,gcd(a,b));
	return 0;
}
int gcd(int a,int b){
	if (b==0)
	return a;
	else
	return gcd(b,a%b);
}
