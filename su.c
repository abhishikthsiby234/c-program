#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the no of columns:");
	scanf("%d",&c);
	printf("enter the no of rows:");
	scanf("%d",&r);
	int a[r][c],b[r][c];
	printf("enter the no in first matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("enter the no in second matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("elements second matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
		
		
	}
	printf("elements first matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
return 0;

}
