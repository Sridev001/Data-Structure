#include<stdio.h>
int main()
{
	int i,j,k;
	int n,m,l;
	int a[5][5],b[5][5],c[5][5];
	printf("enter the 'n' rows : ");
	scanf("%d",&n);
	printf("enter the 'm' rows : ");
	scanf("%d",&m);
	printf("enter the 'l 'coloumn : ");
	scanf("%d",&l);
	printf("Enter the a matrix elements");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nthe a[%d][%d] is ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the b matrix elements");
	for(j=0;j<m;j++)
	{
		for(k=0;k<l;k++)
		{
			printf("\nthe b[%d][%d] is ",j,k);
			scanf("%d",&b[j][k]);		
		}
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			c[i][k]=0;
			for(j=0;j<m;j++)
			{
				c[i][k]=(c[i][k]+(a[i][j]*b[j][k]));
			}
		}
	}
	printf("The c matrix is \t\n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			printf("%d\t",c[i][k]);
		}
		printf("\n");
	}
}
