#include <stdio.h>

#define TIMES 3

int function(double k)
{	
	double x;
	
	for(int i = 0; i < TIMES - 1; i++)
	{
		printf("변수를 입력하시오: ");
		scanf("%lf", &x);
		k += x;
	}
	
	return k;
}

int main(void)
{
	double avg;
	double alpha;
	double y = 0;
	double k/* = 0*/;
	
	printf("변수를 %d번 입력을 받을 에정입니다.\n", TIMES);
	
	function(k);
	
	printf("변수를 입력하시오: ");
	scanf("%lf", &y);
	
	alpha = (TIMES-1) / TIMES;
	avg = (alpha * k) + ((1 - alpha) * y);
	
	printf("평균필터 값: %lf", avg);
	
	return 0;
}