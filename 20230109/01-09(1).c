#include <stdio.h>

int main(void)
{
	int i=0x10; //8진수 아스키 코드
	char c=69;  //아스키 코드
	char d=65;
	double f=12.3;
	 
	printf("i의 주소: %u, 값: %d\n", &i, i); //i의 자릿값, 변수 i의 값을 출력
	printf("c의 주소: %u 값: %c\n", &c, c);  //c의 자릿값, 변수 c의 값을 출력
	printf("f의 주소: %u 값: %lf\n", &f, f); //f의 자릿값, 변수 f의 값을 출력
	printf("d의 주소: %u 값: %c\n", &d, d); //d의 자릿값, 변수 d의 값을 출력
	
	return 0;
}