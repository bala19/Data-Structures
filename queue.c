#include<stdio.h>
#define max 100

int q[max],fp=-1,rp=-1;

void enqueue(int n)
{
	if(rp==max)
	{
		printf("\nQueue is full");
		return;
	}
	else
		q[++rp]=n;
}

int dequeue()
{
	if(fp==rp)
	{
		printf("\nQueue is empty");
		return -1;
	}
	else
		return q[++fp];
}

int main()
{
	int n,c;
	while(1)
	{
		printf("\n1.Enqueue  2,Dequeue  3.Exit...");
		scanf("%d",&c);
		switch(c)
		{
		case 1:  scanf("%d",&n);
			 enqueue(n);
			 break;
		case 2:  n=dequeue();
			 if(n!=-1)
			 printf("%d",n);	
			 break;
		case 3:  return 0;
		default: printf("Enter a valid choice\n");
		}
	}
}
