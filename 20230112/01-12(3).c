#include <stdio.h>
#define STUDENTS 10

void credit_put(float credit[STUDENTS])
{
	for(int i=0; i<STUDENTS; i++)
		credit[i]=(rand()%5)+0.3;
}

void convert(float credit[STUDENTS], float score[STUDENTS])
{
	for(int i=0; i<STUDENTS; i++)
	{
		score[i]=(100/4.3)*credit[i];
	}
}

void print_score_credit(float score[STUDENTS], float credit[STUDENTS])
{
	for(int i=0; i<STUDENTS; i++)
	{
		printf("\n");
		printf("점수: %lf         학점: %lf", score[i], credit[i]);
	}
}

int main(void)
{
	float score[STUDENTS];
	float credit[STUDENTS];
	
	credit_put(credit);
	convert(credit, score);
	print_score_credit(score, credit);
	
	return 0;
}