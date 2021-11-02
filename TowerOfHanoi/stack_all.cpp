// Multiple stacks


#include <stdlib.h>
#include <stdio.h>
#define ARRAY_SIZE  100


int stackData[ARRAY_SIZE];
int counter=0;


typedef char DATA_TYPE;
typedef int BOOL;

class Stack {

private:
    DATA_TYPE stackData[ARRAY_SIZE];
    int numItems;

public:
    // Constructor
    Stack()
    {
        numItems = 0;
    }



// TODO: what happens when the stack gets full?
void push(DATA_TYPE data) {
    stackData[numItems] = data;
    numItems++;
}

int pop() {
    if( !isEmpty()) {
        numItems --;
        return stackData[numItems];
        //printf("Not empty 1");
    }
    // throw error
}


DATA_TYPE peek()
{
    return stackData[numItems];
}

BOOL isFull()
{
	return (numItems >= ARRAY_SIZE);
}

// Empty = 0; everything else = not empty
BOOL isEmpty()
{
    return numItems <= 0;
}

/*
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
*/

void print()
{
    Stack tempStack = Stack();
    DATA_TYPE value;
    while (!isEmpty())
    {
        value = pop();
        tempStack.push(value);

    }
    printf("[");
    while (!tempStack.isEmpty())
    {
        value = tempStack.pop();
        printf("%d", value);
        push(value);
    }
    printf("]\n");

    
}

/*
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
*/
};