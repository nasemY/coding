#include <stdio.h>

void Snail(int n) {
	int len = n;//�Է¹��� �� = ���μ����� ����
	int snail[50][50];
	int k = 1;//ä������ ��
	int x = -1, y = 0;//�ݺ��� �ȿ����� ���μ���
	int l = 1;//�������
	int i, j;//���μ���
	while(1)//���ѹݺ�
	{
		for (i = 0; i < len;i++) //���� ���� ä���
		{
			x += 1;
			snail[y][x] = k++;//���� 0���� k=1~ ä��
			printf("xxxxx i = %d, x =%d, y = %d, k = %d \n",i,x,y,k);
		}
		if (--len < 0)//�ݺ��� Ż������
		{
			break;
		}
		for (i = 0; i < len; i++)
		{
			y += l;
			snail[y][x] = k++;
			printf("yyyyy i = %d, x =%d, y = %d, k = %d \n", i, x, y, k);
		}
		l *= -1;//***������ȯ
		}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n;j++) {
			printf("  i=%d, j=%d %4d", i,j, snail[i][j]);
		}
		printf("\n");
	}

}

int main() {
	int k;
	printf("int num : ");
	scanf("%d", &k);
	printf("%d %d ������ �迭�� ����մϴ� \n \n", k, k );
	Snail(k);

}

//�迭�� ���� ��ȣ���� �д´�.
//������ �迭