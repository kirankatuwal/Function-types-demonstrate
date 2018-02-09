#include<stdio.h>
int armstrong(int n)
{
	int r,arm=0;
	while (n>0)
	{
		r=n%10;//last digit
		arm=arm+(r*r*r); //last digit ko cube sanga sum gardai janxa
		n/=10; // omit the last digit which is not needed in program
	}
	return(arm);
}

int main()
{
	int n,check;
	printf("enter a number ");
	scanf("%d",&n);
	check=armstrong(n);
	if (check==n)
		{
			printf("Armstrong");
		}
		else
		{
			printf("NOt armstrong");
		}
	return 0;
}
