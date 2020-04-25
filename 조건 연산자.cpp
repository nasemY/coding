#include <stdio.h>
int main() {
	int A, B, C;
	int max;
	printf("정수 A를 입력하세요:");
	scanf("%d", &A);
	printf("정수 B를 입력하세요:");
	scanf("%d", &B);
	printf("정수 C를 입력하세요:");
	scanf("%d", &C);
	max = A > B ? A : B;
	max = max > C ? max : C;
	printf("가장 큰 정수는 무엇입니까?: %d\n", max );
	printf("그 수는 홀수입니까 짝수입니까?: %s\n", max % 2 == 0 ? "짝수" : "홀수");
	
}