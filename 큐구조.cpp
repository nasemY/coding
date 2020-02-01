#include <stdio.h>
#include <string.h>

int queue[100000];
int length;
int head;
int tail;

void push(int data);
void pop();
int peek();

int main() {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("%d\n", peek());
	pop();
	pop();
	printf("%d\n", peek());
	printf("%d\n", length);

	pop();
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	printf("%d\n", peek());
	pop();
	pop();
	printf("%d\n", peek());
	printf("%d\n", length);
}

void push(int data) {
	queue[tail] = data;
	length++;
	tail++;
}

void pop() {
	queue[head] = 0;
	head++;
	length--;
}

int peek() {

	return queue[head ];

}