#include <stdio.h>

int main(void)

{
	int a=0;
	
	scanf("%d",&a);
	
	if(1<=a&&a<=4000)
	{
		if((a%4==0)&&(a%100!=0||a%400==0))
			printf("1");
		else
			printf("0");
	}
	
	return 0;
}
