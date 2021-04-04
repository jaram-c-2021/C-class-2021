#include <stdio.h>


void star(int s)//별 찍기
{
    if(s <= 0)
        return;
    
    printf("*");
    star(s-1);
}

void count(int c, int n)//줄바꿈
{
    if(c > n)
        return;
    
    star(c);
    printf("\n");
    count(c+1, n);
}


int main()
{
    int a;
    scanf("%d", &a);
    
    count(1, a);
}
