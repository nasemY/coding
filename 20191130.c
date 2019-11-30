#include<stdio.h>
#include<stdlib.h>

void func1(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}

void func2(int* a, int *b)
{
	for (int* num = a; num < b; num++) {
		printf("%3d", *num);
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	func1(arr, n);
	func2(arr, arr + n);
}
