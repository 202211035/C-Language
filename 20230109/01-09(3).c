#include <stdio.h>

int main(void)
{
	int i=3000;
	int* p=NULL;
	
	p=&i;
	
	printf("i=%d\n", i);
	printf("&i=%u\n\n", &i);
	
	printf("p=%d\n", p);
	printf("&p=%u\n\n", &p);
	printf("%d", *p);
	
	return 0;
}