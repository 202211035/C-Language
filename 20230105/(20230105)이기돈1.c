#include <stdio.h>
long combination(int n, int r)
{
	return (funcion(n)/(funcion(r)*funcion(n-r)));
}

int get(void)
{
	int n; 
	
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	
	return n;
}

int funcion(int n)
{
	int i;
	long result=1;
	
	for(i=1; i<=n; i++)
		result*=i;
	
	return result;
}

int main(void)
{
	int a, b;
	
	a=get();
	b=get();
	
	printf("C(%d, %d)=%ld\n", a, b, combination(a, b));
	return 0;
}