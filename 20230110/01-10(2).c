#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define X 10
#define Y 10

int imit_ary(int a[X][Y]) //초기화
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			a[i][j]=0;
		}
	}
}

int count(int b[X][Y]) //초기화
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{
			b[i][j]=0;
		}
	}
}

int set_data(int a[X][Y], int b[X][Y])//랜덤적인 수 생성, 횟수 증가
{
	int x=rand()%10;
	int y=rand()%10;
		
	a[x][y]=rand()%100;
	b[x][y]++;
}

int print_ary(int a[X][Y])//랜덤수 생성함수 출력
{
	for(int i=0; i<X; i++)
	{
		printf("\n");
		for(int j=0; j<Y; j++)
		{
			printf("%3d", a[i][j]);
		}
	}
}

int count_print_ary(int b[X][Y]) //횟수함수 출력
{
	for(int i=0; i<X; i++)
	{
		printf("\n");
		for(int j=0; j<Y; j++)
		{
			printf("%3d", b[i][j]);
		}
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	int a[X][Y];
	int b[X][Y];
	
	imit_ary(a);
	count(b);
	for(int i=0; i<X*Y; i++)
		set_data(a, b);
	
	
	print_ary(a);
	printf("\n===============================\n");
	count_print_ary(b);
	
	return 0;
}