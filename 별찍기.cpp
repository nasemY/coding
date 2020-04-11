#include <stdio.h>
int main() {
	int n ;
	scanf("%d", &n);
	for (int i = 0; i < n-1 ; i++) {
		for (int j = i; j < n; j++) {
			printf("0");

		}

		for (int j = 0; j < i*2+1; j++) {
			printf("*");
			
		}
		printf("\n");
	}
	

}