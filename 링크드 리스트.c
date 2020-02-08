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

void insertData(int newData, itn)

void addData(int newData) {
	Node* temp = malloc(sizeof(Node));
	temp->data = newData;
	tail->next = temp;
	temp->prev = NULL;
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
	viewAllData();
}