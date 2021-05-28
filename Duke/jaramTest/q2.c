#include <stdio.h>

int main()
{
	int H, M;
	scanf("%d %d", &H, &M);
	
	int x = M - 45;

	if (x < 0) {
		H -= 1;
		M = 60 + M - 45;
		if (H < 0)
			H = 23;
	} else 
		M = M-45;
	printf("%d %d", H, M);

	return 0;
}	
