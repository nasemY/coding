#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* next;
	struct NODE* prev;
}Node;

Node* head;
Node* tail;

void viewAllData()
{
	Node* temp = head;
	while ((temp = temp->next) != NULL) {
		printf("%d\n", temp->data);
	}
}

void deleteNode(int data) {
	Node* temp = head;
	head = temp->next;
	free(temp);
	head->prev = NULL;
}

void insertData(int newData, int idx) {
	Node* temp = tail;
	int i = 0;
	while ((temp = temp->prev) != NULL) {
		i++;
		if (i == idx - 1) break;
	}
	Node* newNode = malloc(sizeof(Node));
	newNode->data = newData;
	Node* t_next = temp->next;
	temp->next = newNode;
	newNode->next = t_next;
	newNode->prev = temp;
	t_next->prev = newNode;
}

void addData(int newData) {
	Node* temp = malloc(sizeof(Node));
	temp->data = newData;
	tail->next = temp;
	temp->prev = tail;
	temp->next = NULL;
	tail = temp;
}


void push(int newData)
{
	Node* temp = malloc(sizeof(Node));
	temp->data = newData;
	tail->next = temp;
	temp->prev = tail;
	temp->next = NULL;
	tail = temp;
}

void pop()
{
	Node* temp = head;
	head = temp->next;
	free(temp);
	head->prev = NULL;
}

int main() {
	head = malloc(sizeof(Node));
	tail = malloc(sizeof(Node));
	head = tail;
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	viewAllData();

}