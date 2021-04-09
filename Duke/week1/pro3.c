#include <stdio.h>

void Star(int num);
void Line(int now, int num);

void Star(int num)
{
	if(num>0)
	{
		printf("*");
		Star(num-1);
	}
	else
		return;
}

void Line(int now, int num)
{
	if(now<=num)
	{
		Star(now);
		printf("\n");
		Line(now+1,num);
	}
	else
		return;
}

int main(void)
{
	int inputLine;
	printf("라인의 수를 입력하세요: ");
	scanf("%d",&inputLine);
	
	if(inputLine>=1&&inputLine<100)
		Line(1,inputLine);
}
