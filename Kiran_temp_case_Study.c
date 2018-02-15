#include<stdio.h>
int main()
{
	int nday,i,temp[10],tot,hot=0,pl=0,cold=0;
	printf("How many days to record => ");
	scanf("%d",&nday);
	printf("Please enter %d days temperature reading\n",nday);
	for(i=0;i<nday;i++)
	{
		printf("Temp [%d] = ",i+1);
		scanf("%d",&temp[i]);
		tot+=temp[i];
	}
	printf("\n---------------------\nDaily Report\n---------------------\n");
	for(i=0;i<nday;i++)
	{
		if(temp[i]>=85)
		{
			printf("Temperature [%d] = %d Very Hot\n",i+1,temp[i]);
			hot+=1;
		}
		else if(temp[i]>=60)
		{
			printf("Temperature [%d] = %d Pleasent day\n",i+1,temp[i]);
			pl+=1;
		}
		else
		{
			printf("Temperature [%d] = %d Very cold day\n",i+1,temp[i]);
			cold+=1;
		}
	}
	printf("The average temperature = %d",tot/nday);
	printf("\nNumber of Hot day = %d",hot);
	printf("\nNumber of pleasent day = %d",pl);
	printf("\nNumber of cold day = %d",cold);
}
