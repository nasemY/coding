#include <stdio.h>

//n입력 받고 1부터 n까지 합 구하기
/*int main() {
	int n;
	int total = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
	     초기식   조건식  증감식
		total += i ;
		
	}
	printf("%d", total);
}
*/
//반복을 이용한 네모 그리기
/*int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("*");
		}
	printf("\n");
	for (int i = 0; i <n-2; i++) {
		printf("*");
		for (int j = 0; j < n - 2;j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}*/

//반복을 이용한 팩토리얼 구하기
/*int main() {
	int n;
	int total = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total *= i;
	}
	printf("%d", total);
}*/

//내림차순
/*int main() {
	int n;
	printf("카운터의 초기값을 입력하시오:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d ", n-i);

	}
}*/

//별찍기
/*int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i ;j++) {
			printf("*");
		
		}
		printf("\n");
	}

}*/

//별찍기-숫자
/*int main() {
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i;j++) {
			printf("%d", j);

		}
		printf("\n");
	}

}*/

//별찍기 응용
/*int main() {
	int n;
	int a = 0;
	printf("정수를 입력하시오:");
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i;j++) {
			a += 1;
			printf("%3d", a);
		}
		printf("\n");
	}
}*/

//별찍기 응용-2
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		for (int j = n-i; j <=n; j++) {
			printf("*");

		}
		printf("\n");
	}

}