#include <stdio.h>

int strlength(char* str) {
	int len=0;
	for (int i = 0;str[i]!=0 ;i++) {
		len++;
	}
return len;
}

int strcmp1(char* str1, char*str2) {
	int a = 1;
	for (int j = 0; str1[j] != str2[j]; j++) {
		if (str1[j] == str2[j]) {
			a = 0;
			printf(0);
		}
	}printf("%d", a);
	return 0;
}

int main() {
	char str1[100];
	char str2[100];
	scanf("%s %s", str1, str2);
	printf("%d", strcmp1(str1,str2));
	return 0;
}
