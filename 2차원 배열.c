#include <stdio.h>
int main() {
	int arr[10];
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++){
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] < arr[j]) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			
		};
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

