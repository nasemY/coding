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
	Node* temp = tail;
	while ((temp = temp->prev) != NULL) {
		printf("%d\n", temp->data);
	}
}

void deleteNode(int data) {
	Node* temp = tail;
	tail = temp->prev;
	free(temp);
	tail->next = NULL;
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
	Node* t_prev = temp->prev;
	temp->next = newNode;
	newNode->prev = t_prev;
	newNode->next = temp;
	t_prev->next = newNode;
}

void addData(int newData) {
	Node* temp = malloc(sizeof(Node));
	temp->data = newData;
	tail->next = temp;
	temp->prev = tail;
	temp->next = NULL;
	tail = temp;
}

int main() {
	head = malloc(sizeof(Node));
	tail = malloc(sizeof(Node));
	head = tail;
	addData(1);
	addData(2);
	addData(3);
	addData(4);
	deleteNode(4);
	insertData(10, 3);
	viewAllData();

}