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
	while ((temp = temp->next) != NULL) {
		if (temp->data == data) break;
	}

	Node* t_prev = temp->prev;
	Node* t_next = temp->next;
	t_next->prev = t_prev;
	t_prev->next = t_next;
	free(temp);
}

void insertData(int newData, int idx) {
	Node* temp = head;
	int i = 0;
	while ((temp = temp->next) != NULL) {
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