#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1 ; i < b; i++) {
		a=a/10;
	}
	printf("%d", a%10);

}