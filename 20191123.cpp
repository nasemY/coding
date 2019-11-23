#include <stdio.h>
int main() {
	int arr[5];
	int i, j,g;
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				g = arr[i];
				arr[i] = arr[j];
				arr[j] =g;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
}