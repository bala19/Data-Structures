#include<stdio.h>

#define max 100

int a[max],top=-1;

void push(int n)
{
	if(top==max)
	{
		printf("Stack Overflow");
		return;
	}
	a[++top]=n;
}

int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow");
		return -1;
	}
	else
	return a[top--];
}

int main()
{
	int c,n;
	while(1)
	{
		printf("\n1.Push  2.Pop  3.Exit...");
		scanf("%d",&c);
		switch(c)
		{
		case 1:  scanf("%d",&n);
			 push(n);
			 break;
		case 2:  n=pop();
			 if(n!=-1)
			 printf("%d\n",n);
			 break;
		case 3:  return 0;
		default: printf("Enter a valid choice");
		}
	}
}
