#include <stdio.h>

int main() {
		int address[5] = { 'a','b','c','d','e'};
		printf("%x %x %x %x %x \n", &address[0], &address[1], &address[2], &address[3], &address[4]);

	for(int i=0; i<5; i++){
		printf("%c\n", *(address +i) );
	}
	return 0;
	
}
