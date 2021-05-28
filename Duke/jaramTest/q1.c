#include <stdio.h>

int main() {
	
	int N, X;
	scanf("%d %d", &N, &X);

	int array[10001];
	for (int i=0; i<N; ++i) {
		scanf("%d", &array[i]);
	}

	for (int i=0; i<N; ++i) {
		if (array[i] < X)
			printf("%d ", array[i]);
	}

	return 0;
}
