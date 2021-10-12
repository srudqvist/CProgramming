// Make it work with single stack


#include <stdio.h>

#define ARRAY_SIZE  100

int counter=0;
int top = -1;
int stack [];

int isEmpty();
int isFull();

// TODO: what happens when the stack gets full?
int push(int data) {
	if(!isFull()) {
      	top = top + 1;   
      	stack[top] = data;
   	} 
   	else {
    	printf("Stack is full.\n");
   	}
	
}

int pop() {
	int data;
	
	if(!isEmpty()) {
		data = stack[top];
		top = top - 1;   
		return data;
	} 
	else {
		printf("Stack is empty.\n");
	}
}

int peek()
{
	return stack[top];
}

int isFull()
{
	if(top == ARRAY_SIZE){
       return 1;
	}
    else{
       return 0;
	}
}

// Empty = 0; everything else = not empty
int isEmpty()
{
	if(top == -1){
      	return 1;
	}
   	else {
      	return 0;
	}
}

int main () {
	push(1);
	push(3);
	push(10);
	pop();
	pop();
	push(5);
	//printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

	// print stack data 
	while(!isEmpty()) {
		int data = pop();
		printf("%d\n",data);
	}
   
    return 0;
}