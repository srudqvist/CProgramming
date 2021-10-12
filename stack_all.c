// Multiple stacks


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
    int * stackData;
    int * counter;
} STACK;

STACK initializeStack()
{
    // the size of an integer in C depends on the machine the program is running on
    // malloc needs to be type casted.
    STACK newStack;
    int* data = (int*)malloc(ARRAY_SIZE * sizeof(int));
    newStack.stackData = data;
    newStack.counter = malloc(sizeof(int));
    counter = data;
    return newStack;
}

// TODO: what happens when the stack gets full?
void push(STACK stack, int value) {
    * stack.counter = value;
    counter++;
}

int pop(STACK stack) {
    if( !isEmpty(stack)) {
        //return stack.*(--counter);
        printf("Not empty 1");
    }
}

int peek(STACK stack)
{
    if( !isEmpty(stack)) {
        return stack. * (counter - 1);
        printf("not empty2");
    }
}

int isFull(STACK stack)
{
	return (stack.counter >= stack.stackData + ARRAY_SIZE);
}

// Empty = 0; everything else = not empty
int isEmpty(STACK stack)
{
    return (counter <= stack.stackData);
}
STACK myStack;

void printStack(STACK theStack)
{
    int i;
    STACK temp;
    while (! isEmpty(theStack))
    {
        i = pop(theStack);
        push(temp, i);
    }
    printf("[ ");
    while (! isEmpty(temp))
    {
        i = pop(temp);
        // print i
        printf("%d ", i);
        push(theStack, i);
    }
    printf("]");
}


int main () {
	myStack = initializeStack();

    for (int i = 0; i < 8 && !isFull(myStack); i++)
    {
        push(myStack, data[i]);
    }



    while (!isEmpty(myStack))
    {
        int d = pop(myStack);
        printf("Popped %\n", d);
    }
    return 0;
}