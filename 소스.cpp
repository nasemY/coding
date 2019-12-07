#include <stdio.h>
int fac(int n) {
	if (n == 1) return 1;
	return n * fac(n - 1);
}

int main() {
	int a;

	scanf_s("%d", &a);
	printf("%d", fac(a));
}