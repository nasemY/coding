#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	memset(str, 0, sizeof(str));
	str[0] = '±è' >> 8;
	str[1] = '±è'&255;
	printf("%s", str);

}