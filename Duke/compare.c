#include "head.h"

int compare(int num)
{
	if(num%2==0)
	{
		printf("%d는 짝수입니다.\n",num);
		return 0;
	}
	else if(num%2==1)
	{
		printf("%d는 홀수입니다.\n",num);
		return 0;
	}
	else
	{
		printf("올바른 숫자를 입력해주세요\n");
		return 1;
	}
}
