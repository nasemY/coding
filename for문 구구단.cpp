#include <stdio.h>
int main() {
	int a;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &a);
	printf("������:%d\n", a);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n",a,i, a*i);
	}
}