#include <stdio.h>

//n�Է� �ް� 1���� n���� �� ���ϱ�
/*int main() {
	int n;
	int total = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
	     �ʱ��   ���ǽ�  ������
		total += i ;
		
	}
	printf("%d", total);
}
*/
//�ݺ��� �̿��� �׸� �׸���
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

//�ݺ��� �̿��� ���丮�� ���ϱ�
/*int main() {
	int n;
	int total = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total *= i;
	}
	printf("%d", total);
}*/

//��������
/*int main() {
	int n;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d ", n-i);

	}
}*/

//�����
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

//�����-����
/*int main() {
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i;j++) {
			printf("%d", j);

		}
		printf("\n");
	}

}*/

//����� ����
/*int main() {
	int n;
	int a = 0;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i;j++) {
			a += 1;
			printf("%3d", a);
		}
		printf("\n");
	}
}*/

//����� ����-2
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