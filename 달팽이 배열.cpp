#include <stdio.h>

void Snail(int n) {
	int len = n;//입력받은 수 = 가로세로의 길이
	int snail[50][50];
	int k = 1;//채워지는 수
	int x = -1, y = 0;//반복문 안에서의 가로세로
	int l = 1;//진행방향
	int i, j;//가로세로
	while(1)//무한반복
	{
		for (i = 0; i < len;i++) //가로 세로 채우기
		{
			x += 1;
			snail[y][x] = k++;//세로 0부터 k=1~ 채움
			printf("xxxxx i = %d, x =%d, y = %d, k = %d \n",i,x,y,k);
		}
		if (--len < 0)//반복문 탈출조건
		{
			break;
		}
		for (i = 0; i < len; i++)
		{
			y += l;
			snail[y][x] = k++;
			printf("yyyyy i = %d, x =%d, y = %d, k = %d \n", i, x, y, k);
		}
		l *= -1;//***방향전환
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
	printf("%d %d 달팽이 배열을 출력합니다 \n \n", k, k );
	Snail(k);

}

//배열은 뒷쪽 괄호부터 읽는다.
//달팽이 배열