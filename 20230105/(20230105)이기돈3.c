#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS 20

int class[10];
int score[STUDENTS];
int max, mim, average=0;

int main(void)
{
	srand((unsigned)time(NULL));

	for(int i=0; i<STUDENTS; i++)
		score[i]=rand()%100+1;
	
	for(int i=0; i<STUDENTS; i++)
	{
		if(score[i]<=100&&score[i]>90)
			++class[0];
		else if(score[i]<=90&&score[i]>80)
			++class[1];
		else if(score[i]<=80&&score[i]>70)
			++class[2];
		else if(score[i]<=70&&score[i]>60)
			++class[3];
		else if(score[i]<=60&&score[i]>50)
			++class[4];
		else if(score[i]<=50&&score[i]>40)
			++class[5];
		else if(score[i]<=40&&score[i]>30)
			++class[6];
		else if(score[i]<=30&&score[i]>20)
			++class[7];
		else if(score[i]<=20&&score[i]>10)
			++class[8];
		else
			++class[9];
	}
	
	for(int i=0; i<STUDENTS; i++)
		average+=score[i];
	printf("평균 점수: %d\n", average/STUDENTS);
	
	max=mim=score[0];
	
	for(int i=0; i<STUDENTS; i++)
	{
		if(score[i]<mim)
			mim=score[i];
		
		if(score[i]>max)
			max=score[i];
	}
	printf("최고점수: %d\n최저 점수: %d\n", max, mim);
	
	printf("[01-09]: ");
	for(int i=0; i<class[9]; i++)
		printf("*");
		
	printf("\n[10-20]: ");
	for(int i=0; i<class[8]; i++)
		printf("*");
			
	printf("\n[20-30]: ");
	for(int i=0; i<class[7]; i++)
		printf("*");
		
	printf("\n[30-40]: ");
	for(int i=0; i<class[6]; i++)
		printf("*");
		
	printf("\n[40-50]: ");
	for(int i=0; i<class[5]; i++)
		printf("*");
		
	printf("\n[50-60]: ");
	for(int i=0; i<class[4]; i++)
		printf("*");
		
	printf("\n[60-70]: ");
	for(int i=0; i<class[3]; i++)
		printf("*");
		
	printf("\n[70-80]: ");
	for(int i=0; i<class[2]; i++)
		printf("*");
		
	printf("\n[80-90]: ");
	for(int i=0; i<class[1]; i++)
		printf("*");
		
	printf("\n[90-100]: ");
	for(int i=0; i<class[0]; i++)
		printf("*");
		
	return 0;
}


