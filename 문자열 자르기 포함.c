#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int strlength(char* str) {
	int len = 0;
	for (int i = 0;str[i] != 0;i++) {
		len++;
	}
	return len;
}

char* substring1(char *str, int b, int e) {
	char *str1 = malloc(sizeof(char)*(e - b + 2));
	char *str2;
	for (int i = 0; i < (e-b+2); i++) {
		if (str2[i] = str1[i]) return 1;
	}
	return str1;
}


int strcmp1(char* str1, char*str2) {
	int len = strlength(str1);
	int len2 = strlength(str2);
	if (len - len2)return 1;
	for (int i = 0; i < len; i++) {
		if (str1[i] != str2[i]) return 1;
	}
	printf("%s", substring1);
	return 0;
}

int main() {
	char str1[100];
	char str2[100];
	memset(str1, 0, sizeof(str1));
	memset(str2, 0, sizeof(str2));
	scanf("%s %s", str1, str2);
	printf("%s", strcmp1(str1, str2));
	return 0;
}