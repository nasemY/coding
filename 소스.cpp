#include <stdio.h>
int fac(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fac(n - 1) + fac(n - 2);
	
	
}

int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d\n", fac (n));
	return 0;
}