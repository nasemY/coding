#pragma warning(disable:4996)
#include <stdio.h>
#define MAXSIZE 10
#define TRUE 1
#define FALSE 0

int top = -1;
int stack[MAXSIZE];
void push(int U);
int pop();
void show();
int isEmpty();
int isFull();

int main() {
	

	char c;
	int n;
	printf("****************************\n");
	printf("U:PUSH , O:POP , S:SHOW\n");
	printf("****************************\n");
	while (1) {
		scanf("%c", &c);

		switch (c)
		{
		case 'U':
			scanf("%d", &n);
			push(n);
			break;
		case 'O':
			if (isEmpty()) {
				printf("stack is empty \n");
			}
			else {
				printf("%d\n", pop());
			}

			break;
		case 'S':
			show();
			break;
		}
	}
}

int isEmpty() {
	if (top <= -1) {
		return TRUE;
	}
	return FALSE;
}

int isFull(){
	if (top >= MAXSIZE - 1) {
		return TRUE;
	}
}

void push(int U) {
	top++;
	stack[top] = U;
}

int pop() {
	return stack[top--];
}

void show(){
	for (int i = 0; i <= top; i++) {
		printf("%d ", stack[i]);

}
	printf("\n");
}