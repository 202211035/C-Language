#include <stdio.h>

int setting(int a[5], int b[5], int c[10])
{
	for(int i=0; i<5; i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	
	int temp, k;
	for(int i=0; i<10-1; i++)
	{
		k=i;
		for(int j=i+1; j<10; j++)
		{
			if(c[j]<c[k])
				k=j;
		}
		temp=c[i];
		c[i]=c[k];
		c[k]=temp;
	}
}

int C_print(int c[10])
{
	for(int i=0; i<10; i++)
		printf("%d\n", c[i]);
}

int main(void)
{
	int a[5]={4, 6, 8, 13, 15};
	int b[5]={1, 3, 5, 7, 10};
	int c[10];
	
	
	setting(a, b, c);
	C_print(c);
	
	return 0;
}