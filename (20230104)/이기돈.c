#include <stdio.h>

static int fall=0;
static int amount;
static int balance=10000;

void Print() //통장보기내역출력함수
{
	printf("============================\n");
	printf("입금 \t출금\t 잔고\n");
	printf("\t \t %d\n", balance);
	printf("============================\n");
}

int check() //id와 pw입력받은 후 일치여부 판단
{
	static int ID=30815;
	static int PW=12345;
	static int id; //입력하는
	static int pw;
	
	for(int i=0; i<5; i++)
	{
		printf("ID를 입력하시오: ");
		scanf("%d", &id);
		printf("PASSWORD를 입력하시오: ");
		scanf("%d", &pw);
		
		if(ID==id&&PW==pw)
			break;
		else
		{
			printf("ID나 PASSWORD가 틀렸습니다.\n");
			fall++;
		}
	}
}

void money_in() //입금
{
	printf("현재 잔고: %ld", balance);
	printf("입금하고자하는 금액을 입력하시오: ");
	scanf("%d", &amount);
	Print();
	printf("%d \t\t", amount);
	balance += amount;
	printf("%ld \n", balance);
	printf("============================\n");
}

void money_out() //출금
{
	printf("현재 잔고: %ld\n", balance);
	printf("출금하고자하는 금액을 입력하시오: ");
	scanf("%d", &amount);
	if(amount<=balance)
	{
		Print();
		printf("\t %d \t", amount);
		balance-=amount;
		printf("%ld \n", balance);
		printf("============================\n");
	}
	else
		printf("잔고가 부족합니다.\n");
}

void shut_down() //종료
{
	Print();
	printf("============================\n");
}

int main(void) //메인함수
{
	int choise;
	
	
	printf("ㅇㅇ은행의 오신 것을 환영합니다.\n");
	check();
	if(fall<5)
	{
		printf("서비스를 선택하십시오.\n1. 입금 \t2. 출금 \t3. 종료\n: ");
		scanf("%d", &choise);


		switch(choise)
		{
			case 1:
				money_in();
				break;
			case 2:
				money_out();
				break;
			case 3:
				shut_down();
				break;
		}
	}
	else	
		printf("서비스를 이용해주셔서 감사합니다.");
	
	return 0;
}
