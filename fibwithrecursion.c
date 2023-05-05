#include<stdio.h>
int main()
{
	int fibonacci(int n)
	{
		if(n==0)
		return 0;
		else if(n==1)
		return 1;
		else 
		return (fibonacci(n-1)+fibonacci(n-2));
	}
	int num,i;
	printf("Enter the num : ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf(" %d ",fibonacci(i));
	}
}
