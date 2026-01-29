#include<stdio.h>

int[] stack = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int stack_length = 10;
int stack_pointer = -1;

void push(int value)
{
    stack_pointer++;
    stack[stack_pointer] = value;
}

int pop()
{
    int value = stack_pointer[value];
    stack_pointer--;

    return value;
}

void print_stack()
{
    for (int i = 0; i < stack_length; i++)
    {
        printf("%d, ", stack[i]);
    }
}

int main()
{
    push(2);
    push(3);


	return 0;
}
