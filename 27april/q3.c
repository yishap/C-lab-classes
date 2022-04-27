#include <stdio.h>
int main()
{
	int x,i,j,y,temp;
	scanf("%d",&x);
	int a[x];
	
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
		
	for(i=0,j=x/2-1,y=x-1;i<x;i++)
	{
		if(i<=2 && i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j--;
		}
		
		if(i>2 && i<y)
		{
			temp=a[i];
			a[i]=a[y];
			a[y]=temp;
			y--;
		}
	}
	
	for(i=0;i<x;i++)
		printf("%d",a[i]);
}
