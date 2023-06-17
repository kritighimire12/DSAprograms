#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue [n];
int front=-1;
int rear=-1;
void enqueue(int x){
	if (front==0 && rear==(n-1)){
		printf("overflow\n");
	}
	else
	{
		if(front==-1)
		front=0;
		rear++;
		queue[rear]=x;
	}
}
void dequeue(){
	if(front==-1 || front>rear){
		printf("underflow\n");
	}
	else
	{
		printf("dequeued element is %d\n",queue[front]);
		front++;
	}
}
void display(){
	int i;
	if(front==-1 || front>rear){
	printf("underflow\n");	
	}
	else
	{
		for(i=0;i<5;i++){
			printf("%d\t",queue[i]);
		}
	}
	
}
int main(){
	char ch;
	int item;
	do{
			printf("***operations***\n");
	        printf("1. Enqueue\n");
	        printf("2. Dequeue\n");
	        printf("3. Display\n");
	        printf("4. Quit\n");
         	printf(" enter your choice:");
	         scanf("%d",&ch);
 
	 switch(ch){
		case 1:
			printf("enter the elements to insert\n");
			scanf("%d",&item);
			enqueue(item);
			break;
			
		case 2:
			dequeue();
			break;
			
		case 3:
			display();
			break;
			
		case 4:
			exit(0);
			break;
			
			default:
			printf("error");
			
	    }
	    printf("do you want to continue:");
	    scanf(" %c",&ch);
    }while (ch=='y'||ch=='Y');
    return 0;
}




