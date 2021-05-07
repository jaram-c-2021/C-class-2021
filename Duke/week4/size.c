#include <stdio.h>

int main() {

		int num[5] = { 0, };
		int i;
		for(i=0; i<sizeof(num) / sizeof(int); ++i){
			num[i] += i;
			printf("%d\n",num[i]);
	}
}
