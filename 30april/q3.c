// question 3: transpose of a matrix
#include<stdio.h>
int main()
{
	int i,j;
	int b[3][3]={{7,8,9},{1,2,3},{4,5,6}};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[j][i]);
		}
		printf("\n");
	}
}
