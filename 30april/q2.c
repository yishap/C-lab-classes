// question 2: matrix subtraction
#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3]={{10,11,12},{13,14,15},{16,17,18}};
	int b[3][3]={{7,8,9},{1,2,3},{4,5,6}};
	int c[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
