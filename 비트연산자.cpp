#include <stdio.h>
int main() {
	int n, x;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &x);
	printf("%d << %d의 값: %d\n", n, x, n << x);

}