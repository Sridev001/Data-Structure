#include<stdio.h>
int main()
{
	int a[50],i,n,oc,ec;
	oc=0;
	ec=0;
	printf("enter n = ");
	scanf("%d",&n);
	printf("enter the array element");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++);
	{
		if(a[i]%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	printf("\n\n the even count = %d\n",ec);
	printf("\n\n the odd count = %d\n",oc);
	
}
