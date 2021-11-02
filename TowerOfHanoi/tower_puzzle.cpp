/**tower_puzzle.c
    Implements Tower of Hanoi solution in C using stacks.
    @Author: Chris Branton
    @Created: 2021-10-05
*/

/********************************************************************************/
/* Stack API: Stack definition assumed to be in a file "stack.c"

Type definitions:
	STACK: the type defining the stack.
	DATA_TYPE: defines the type of data in the stack. Assumed to be an integer type.
	BOOL: Returns 0 or 1. Intended to differentiate semantic Boolean from other integer types.

Functions:
    STACK initialize_stack() : return an empty stack
    void push(STACK stack, DATA_TYPE item) : push the item onto the stack. Must not try to push a full stack.
    DATA_TYPE pop(STACK stack) : remove and return the top item from the stack. Must not try to pop an empty stack.
    DATA_TYPE peek(STACK stack) : return but do not remove the top item from the stack.
    BOOL isFull(STACK stack) : return 0 if the stack can hold more items. Return nonzero otherwise.
    BOOL isEmpty(STACK stack) : return 0 if the stack contains items. Return nonzero otherwise.

*/
/********************************************************************************/


#include <stdlib.h>
#include <stdio.h>

#include "stack_all.cpp"


// prints the given stack in order of insertion.
// Leaves the stack as we found it.
// Format: [ item1 item2 item3 ... lastItem ]
// TODO: implement this function
void printStack(STACK stk)
{
    printf(stk);
}

void hanoi(int size, STACK* first, STACK* second, STACK* third)
{
    if(size>0)
    {
        hanoi(size-1, first, third, second);
        int current = first->pop();
// TODO: leave a commment explaining what the following preprocessor directive does

        second->push(current);
        hanoi(size-1, third, second, first);
    }

}

int main () {
    // Create stacks and populate first one
    Stack* stackA;
    Stack* stackB;
    Stack* stackC;

    printf("Initializing stacks\n");
    stackA = new Stack();
    stackB = new Stack();
    stackC = new Stack();
    int size = 4;

    // fill the stack
    for (int i = size; i > 0 && !isFull(stackA); i--)
    {
        printf ("Pushing %d\n", i);
        stackA->push(i);
    }
    stackA->print();
    stackB->print();
    stackC->print();


    hanoi(size, stackA, stackB, stackC);

    stackA->print();
    stackB->print();
    stackC->print();

    return 0;
}