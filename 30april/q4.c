// question 4: multiplication of a matrix
#include<stdio.h>
int main()
{
	int i,j;
	int a[4][3]={{7,8,9},{1,2,3},{4,5,6},{11,12,13}};
	int b[3][2]={{1,2},{4,5},{7,8}};
	int c[4][2]={0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for( int k=0;k<5;k++)
			{
				c[i][j]+=a[i][k]+b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}


