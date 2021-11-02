#include <stdlib.h>
#define ARRAY_SIZE  100
//#define int BOOL;

int stackData[ARRAY_SIZE];
int counter=0;


int data [] = {1,2,5,8,13,21,34};

// Declare all functions in the top of the file.
int isEmpty();
int isFull();


typedef struct stackStruct {
    int* stackData;
    int counter;
} STACK;

STACK initializeStack()
{
    // the size of an integer in C depends on the machine the program is running on
    // malloc needs to be type casted.
    STACK newStack;
    int* data = (int*)malloc(ARRAY_SIZE * sizeof(int));
    newStack.stackData = data;
    newStack.counter = 0;
    return newStack;
}

// TODO: what happens when the stack gets full?
void push(int data) {
	stackData[counter] = data;
	counter++;
}

int pop() {
    if( !isEmpty()) {
        return stackData[--counter];
    }
}

int peek()
{
    return (stackData[counter]);
}

int isFull()
{
	return (counter == ARRAY_SIZE);
}

// Empty = 0; everything else = not empty
int isEmpty()
{
    return (counter <= 0);
}
int main () {
	push(1);
    return 0;
}