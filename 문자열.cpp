#include <stdio.h>
#include <string.h>
int main() {
	char str1[10];
	char str2[10];
	int a=0;

	scanf("%s %s",str1, str2 );
	for (int i = 0; i < 10; i++) {
		if (str1[i] != str2[i]) {
			a = 1;
			break;
		}
		
	}printf("%d", a);
	return 0;
}