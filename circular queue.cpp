#include<stdio.h>
#include<conio.h>
#define size 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x){
	if (front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else if(((rear+1)%n)==front){
		printf("queue is full");
		
	}
	else{
		rear=(rear+1)%n;
		queue[rear]=x;
	}
}
void dequeue(){
	if (front==-1 && rear==-1){
		printf("queue is empty");	
	}
	else if(front==rear){
		front=rear=-1;
		
	}
	else{
		front=(front+1)%n;
		
	}
	
}

