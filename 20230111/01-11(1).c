#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define X 5
#define Y 5

int setting(int a[X][Y], int b[X][Y]) //초기화
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
			a[i][j]=b[i][j]=0;
	}
}

int print_bingo(int a[X][Y], int b[X][Y])//빙고 출력
{
	printf("<빙고테이블 출력>");
	printf("\n===================");
	for(int i=0; i<X; i++)
	{
		printf("\n");
		for(int j=0; j<Y; j++)
			printf("%3d", a[i][j]);
	}
	printf("\n===================");
	for(int i=0; i<X; i++)
	{
		printf("\n");
		for(int j=0; j<Y; j++)
			printf("%3d", b[i][j]);
	}
	printf("\n===================\n");
}

int row_col_count(int b[X][Y], int bingcnt) //가로선, 세로선
{
	for(int i=0; i<Y; i++)
	{
		int col=0;
		for(int j=0; j<X; j++)
		{
			int row=0;
			if(b[i][j]==1)
			{
				row++;
				col++;
			}
			if(row=5)
				bingcnt++;
		}
		if(col=5)
			bingcnt++;
	}
}

int dia_count(int b[X][Y], int bingcnt) //대각선
{
	int dia=0;
	for(int i=0; i<X; i++)
	{
		if(b[i][i]==1)
			dia++;
		if(dia=5)
			bingcnt++;
	}
	for(int i=X; i>0; i--)
	{
		if(b[i][i]==1)
			dia++;
		if(dia==5)
			bingcnt++;
	}
}

int num_chack(int put, int b[X][Y], int a[X][Y])
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
		{	
			if(put=a[i][j])
				b[i][j]++;
		}
	}
}

int main(void)
{
	int a[X][Y];
	int b[X][Y];
	int count=1;
	int put=0;
	int bingcnt=0;
	
	setting(a, b); //a[][], b[][] 초기화
	while(count<=X*Y) //빙고에 들어가는 수 생성
	{
		int x=rand()%5;
		int y=rand()%5;
		if(a[x][y]==0)
		{
			a[x][y]=count;
			count++;
		}
	}
	print_bingo(a, b); //빙고 출력
	printf("\n");
	while(bingcnt<3)
	{
		printf("정수를 입력하시오: ");
		scanf("%d\n", &put);
		
		num_chack(put, a, b); //빙고에 넣을 숫자 입력
		
		printf("\n");
		
		dia_count(b, bingcnt); //대각선 확인
		row_col_count(b, bingcnt); //가로선, 세로선 확인
		print_bingo(a, b); //완성된 빙고 출력
		
		printf("\n");
	}
	print_bingo(a, b); //완성된 빙고 출력
	printf("\n==================\n");
	printf("3BINGO!!\n"); //마무리
	
	return 0;
}