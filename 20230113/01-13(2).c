#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS 10

struct students
{
	int number;
	int kor;
	int eng;
	int math;
	double sum;
	double avg;
	double average;
};

int main(void)
{
	struct students s_list[STUDENTS];
	srand((unsigned)time(NULL));
	for(int i=0; i<STUDENTS; i++)
	{
		s_list[i].number=i+1;
		s_list[i].kor=rand()%101;
		s_list[i].eng=rand()%101;
		s_list[i].math=rand()%101;
		s_list[i].sum=s_list[i].kor+s_list[i].eng+s_list[i].math;
		s_list[i].average=s_list[i].sum/3;
		s_list[i].avg=s_list[i].average;
	}
	printf("번호 \t 국어 \t 영어 \t 수학 \t 총점 \t 평균 \n=============================================\n");
	for(int i=0; i<STUDENTS; i++)
		printf("[%2d] \t %d \t %d \t %d \t %.f \t %.1f \n", s_list[i].number, s_list[i].kor, s_list[i].eng, s_list[i].math, s_list[i].sum, s_list[i].avg);
	return 0;
}
