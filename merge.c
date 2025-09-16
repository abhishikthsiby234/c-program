#include<stdio.h>
int main()
	{
		int n,m,i;
		printf("enter size of array1:");
		scanf("%d",&n);
		
		printf("Enter the elements array 1 : \n");
		int ar1[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar1[i]);
		}
		printf("enter size of array2:");
		scanf("%d",&m);
		printf("Enter the elements array 2 : \n");
		int ar2[m];	
		for(i=0;i<m;i++)
		{
			scanf("%d",&ar2[i]);
		}
		printf("merged array=");
		for(i=0;i<n;i++)
		{
			printf("%d",ar1[i]);
		}
		
		for(i=0;i<m;i++)
		{
			printf("%d",ar2[i]);
		}
		return 0;
	}
