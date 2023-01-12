#include <stdio.h>
#define X 7
#define Y 7

int setting(int a[X][Y])
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
			a[i][j]=0;
	}
}

int put_7(int a[X][Y])
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<=i; j++)
			a[i][j]=7;
	}
}
int moving(int a[X][Y], int b[X][Y])
{
	for(int i=0; i<X; i++)
	{
		for(int j=0; j<Y; j++)
			b[i][(j+1)%Y]=a[i][j];
	}
}

int print_moivng(int a[X][Y], int b[X][Y])
{
	for(int i=0; i<X; i++)
	{
		printf("\n");
		for(int j=0; j<Y; j++)
		{
			a[i][j]=b[i][j];
			printf("%3d", a[i][j]);
		}
	}
	printf("\n");
}

int main(void)
{
	int a[X][Y];
	int b[X][Y];
	setting(a);
	put_7(a);
	for(int i=0; i<X; i++)
	{
		moving(a, b);
		print_moivng(a, b);
	}
	return 0;
}