#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*//������ �Է� �޾Ƽ� ��� ���ϱ�(while�� ��� ����)
int main() {
	printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");
	int subject;
	int turn = 0;
	int total = 0;
	while (1) {
		printf("������ �Է��Ͻÿ�:");
		scanf("%d", &subject);
		
		if (subject < 0) {
			break;
		}
		total += subject;
		turn++;
	}
	printf("������ ����� %d �Դϴ�.",total/turn);
}*/

/*//�ִ����� ���ϱ�
int main() {
	int x, y, r;
	scanf("%d %d", &x, &y);
	while (y != 0){
		r = x % y;
		x = y;
		y = r;
	} 
	printf("�ִ�����:%d", x);
}*/

/*//1���� 100���� n����� ��
int main() {
	int n;//��� ��
	int a = 1;//100���� �����ϴ� �� �ʱ� ��
	int total = 0;//����
	scanf("%d", &n);
	while (a<100) {
		
		if (a%n== 0) {
			total += a;
		}
		a++;
	}
	printf("%d", total);
}
*/

//������
int main() {
	srand((unsigned)time(NULL));//seed�� �ٲپ� �ִ� �ڵ�
	int n = rand() % 500;
	int answer;
	int count = 0;
	printf("0~499�� �� �ϳ��� �Է��Ͻÿ�:");
	scanf("%d",&answer);
	while (1) {
		if (answer>n) {
			printf("Down\n");
		}
		else if(answer<n) {
			printf("Up\n");
			
		}
		else {
			printf("����");
			printf("%d", count);
		}
		printf("���� �Է��Ͻÿ�:");
		scanf("%d", &answer);
		count++;
	}
}