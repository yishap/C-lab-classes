#include <stdio.h>
int main()
{
	int x,i;
	scanf("%d",&x);
	int a[x];
	
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<x;i++)
		printf("%d",a[i]);
	
	printf("\n");
	
	for(i=(x-1);i>=0;i--)
		printf("%d",a[i]);
}
		
	
	
	
	
