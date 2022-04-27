#include <stdio.h>
int main()
{
	int x,i,j,temp;
	scanf("%d",&x);
	int a[x];
	
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
		
	for(i=0,j=x-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	
	for(i=0;i<x;i++)
		printf("%d",a[i]);
}
