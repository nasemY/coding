#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*//성적을 입력 받아서 평균 구하기(while문 사용 예제)
int main() {
	printf("성적 입력을 종료하려면 음수를 입력하시오\n");
	int subject;
	int turn = 0;
	int total = 0;
	while (1) {
		printf("성적을 입력하시오:");
		scanf("%d", &subject);
		
		if (subject < 0) {
			break;
		}
		total += subject;
		turn++;
	}
	printf("성적의 평균은 %d 입니다.",total/turn);
}*/

/*//최대공약수 구하기
int main() {
	int x, y, r;
	scanf("%d %d", &x, &y);
	while (y != 0){
		r = x % y;
		x = y;
		y = r;
	} 
	printf("최대공약수:%d", x);
}*/

/*//1부터 100에서 n배수의 합
int main() {
	int n;//배수 값
	int a = 1;//100까지 증가하는 수 초기 값
	int total = 0;//누적
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

//랜덤수
int main() {
	srand((unsigned)time(NULL));//seed를 바꾸어 주는 코드
	int n = rand() % 500;
	int answer;
	int count = 0;
	printf("0~499의 수 하나를 입력하시오:");
	scanf("%d",&answer);
	while (1) {
		if (answer>n) {
			printf("Down\n");
		}
		else if(answer<n) {
			printf("Up\n");
			
		}
		else {
			printf("정답");
			printf("%d", count);
		}
		printf("수를 입력하시오:");
		scanf("%d", &answer);
		count++;
	}
}