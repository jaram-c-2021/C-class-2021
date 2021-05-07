#include <stdio.h>

int main() {

	int snd[2][3] = {
		{ 1, 2, 3},
		{ 4, 5, 6}
	};
	
	printf("%d %d %d\n", snd[0][1], snd[1][0], snd[1][2]);

	return 0;
}
