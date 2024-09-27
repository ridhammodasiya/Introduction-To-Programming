

#include<stdio.h>
main()
{
	int i,j;// i-->colum ,j-->row
	int array[2][2];
	printf("enter arry elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("array elements are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
}
