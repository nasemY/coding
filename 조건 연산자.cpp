#include <stdio.h>
int main() {
	int A, B, C;
	int max;
	printf("���� A�� �Է��ϼ���:");
	scanf("%d", &A);
	printf("���� B�� �Է��ϼ���:");
	scanf("%d", &B);
	printf("���� C�� �Է��ϼ���:");
	scanf("%d", &C);
	max = A > B ? A : B;
	max = max > C ? max : C;
	printf("���� ū ������ �����Դϱ�?: %d\n", max );
	printf("�� ���� Ȧ���Դϱ� ¦���Դϱ�?: %s\n", max % 2 == 0 ? "¦��" : "Ȧ��");
	
}