#include <stdio.h>
int main() {
	int a;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	printf("구구단:%d\n", a);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n",a,i, a*i);
	}
}