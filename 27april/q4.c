#include <stdio.h>
int main()
{
	int x,a,b,c;
	b=0;
	scanf("%d %d",&x,&a);
	c=x-1;
	int arr[x];
	
	for(int i=0;i<x/2;i++)
	{
		a=a-b;
		arr[i]=a;
		b++;
		a=a-b;
		arr[c]=a;
		b++;
		c--;
	}
	
	for(int i=0;i<x;i++)
		printf("%d\t",arr[i]);
}
