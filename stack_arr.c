#include<stdio.h>
#include<stdlib.h>
#define s 1
int stack[s],top=-1;
void push();
void pop();
void display();
void main(){
	int c;
	while(1){
	printf("\n Enter choice:");
	printf("\n 1.Push 2.pop 3.display 4.exit :-");
	scanf("%d",&c);
	switch(c){
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		case 4:exit(0);
		default:printf("Wrong selection");
		}
		}
	}
	void push(){
		int n;
		
		if(top==s)
			printf("Overflow");
		else{
			printf("Enter element:");
			scanf("%d",&n);
			top++;
			stack[top]=n;
		}}
	void pop(){
		int t;
		if(top == -1)
			printf("underflow");
		else{
			t=stack[top];
			printf("%d element delted ",t);
			top--;
		}
		}
	void display(){
		if(top == -1)
			printf("underflow,no elemnts to print");
		for(int i=top;i>=0;i--){
			printf("\n%d",stack[i]);
				}
			}
