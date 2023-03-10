#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int A_win=0;
int B_win=0;
int C_win=0;
int A_money;
int B_money;
int C_money;
int A=0;
int a=0;
int B=0;
int b=0;
int C=0;
int c=0;

void betting() //베팅함수
{	
	printf("세분의 주사위 숫자, 배팅금액을 적어주십시오.\n");
	printf("A님(자본금%d원): ", A_money);  //A=주사위 숫자 a=배팅금액
	scanf("%d, %d", &A, &a);
	printf("B님(자본금%d원): ", B_money);  //B=주사위 숫자 b=배팅금액
	scanf("%d, %d", &B, &b);
	printf("C님(자본금%d원): ", C_money);  //C=주사위 숫자 c=배팅금액
	scanf("%d, %d", &C, &c);
}

int main(void) //메인 함수
{	
	printf("게임을 시작하겠습니다.\n");
	A_money=B_money=C_money=1000;
	for(int i=0; i<10; i++)
	{
		int dice=1+rand()%6;
		betting();
		if(dice==A)
		{
			A_win++;
			A_money+=(a*2);
			printf("A - win, %d\n", A_money);
		}
		else
		{
			A_money-=a;
			printf("A - lose, %d\n", A_money);
		}
		if(dice==B)
		{
			B_win++;
			B_money+=(b*2);
			printf("B - win, %d\n", B_money);
		}
		else
		{
			B_money-=b;
			printf("B - lose, %d\n", B_money);
		}
		if(dice==C)
		{
			C_win++;
			C_money+=(c*2);
			printf("C - win, %d\n", C_money);
		}
		else
		{
			C_money-=c;
			printf("C - lose, %d\n", C_money);
		}
		printf("주사위 눈: %d\n", dice);
	}
	printf("최종결과\n");
	printf("A %d원, %d회", A_money, A_win);
	printf("B %d원, %d회", B_money, B_win);
	printf("C %d원, %d회", C_money, C_win);
	
	return 0;
}