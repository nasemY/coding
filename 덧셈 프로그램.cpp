#include <stdio.h>
int main() {
	int first;
	printf("첫 번째 숫자를 입력하시오:");
	scanf("%d", &first);
	int second;
	printf("두 번째 숫자를 입력하시오:");
	scanf("%d", &second);
	int a = first + second;
	printf("두 수의 합: %d", a);
}