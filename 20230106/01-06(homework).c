#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENTS 10
#define SUBJECT 3

int score[STUDENTS][SUBJECT];
int sum[STUDENTS];
int average[SUBJECT];
int rank[STUDENTS];
int R[STUDENTS];

void input()
{
	for(int i=0; i<STUDENTS; i++)
	{	
		for(int j=0; j<SUBJECT; j++)
		{
			score[i][j]=rand()%100+1;
			sum[i]+=score[i][j];
		}
		average[i]=sum[i]/SUBJECT;
	}
}

void ranking()
{
	for(int i=0; i<STUDENTS; i++)
	{
		R[i]=1;
		for(int j=0; j<STUDENTS; j++)
			if(sum[i]<sum[j])
				R[i]++;
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	input();
	
	for(int i=0; i<STUDENTS; i++)
		R[i]=sum[i];
	
	ranking();
	printf(" 번호 \t kor \t eng \t math \t sum \t avg \t rank\n");
	for(int i=0; i<STUDENTS; i++)
		printf(" [%d] \t %d \t %d \t %d \t %d \t %d \t %d\n", i+1, score[i][1], score[i][2], score[i][3], sum[i], average[i], R[i]);
	
	return 0;
}