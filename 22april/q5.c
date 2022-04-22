// display   1   2   3   4   5
//           9   8   7   6
//           10  11  12
//           14  13
//           15
#include<stdio.h>
int main()
{
int n=5, a=1, b=1, i=0;
	loop:
		if(n%2!=0){
			b=1;
		x:
			printf("%d \t",a);
			a++;
			b++;
			if(k<=n)
		goto x;
	}
	else{
		int d = a;
		i = d+n-1;
		y:	
			printf("%d \t", i);	
			a++;
		i--;
		if(i>=d)
		goto y;
	}
	printf("\n");
	n--;
	if(n>=1)
		goto loop;
}
	
	
