#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int idx = 0;

void Push(int val);
int Pop();
int isFull();
int isEmpty();
void printStack();

int main(void)
{
	int num;
	while (1)
	{
		printf("push:1, pop:2, quit:q --> select:");
		if (scanf("%d", &num) == 0)
			break;

		if (num == 1)
		{
			if (isFull())
			{
				printf("Stack is Full!\n");
				continue;
			}
			int val;
			printf("ÀÔ·Â°ª: ");
			scanf("%d", &val);
			Push(val);
			printStack();
		}
		else if (num == 2)
		{
			if (isEmpty())
			{
				printf("Stack is Empty!\n");
				continue;
			}
			Pop();
			printStack();
		}
		else
		{
			break;
		}
	}
	return 0;
}

void Push(int val)
{
	stack[idx] = val;
	idx++;

	return;
}

int Pop()
{
	return idx--;
}

int isFull()
{
	return (SIZE <= idx);
}

int isEmpty()
{
	return (idx <= 0);
}

void printStack()
{
	if (idx == 0)
		printf("Stack is Empty!");
	else
	{
		printf("Stack:");
		for (int i = 0; i < idx; i++)
		{
			printf("%d ", stack[i]);
		}
	}
	printf("\n");
}