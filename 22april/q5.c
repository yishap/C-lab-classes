// display   1   2   3   4   5
//           9   8   7   6
//           10  11  12
//           14  13
//           15
#include<stdio.h>
int main()
{
int n=5, c=1, k=1, i=0;
	loop:
		if(n%2!=0){
			k=1;
		a:
			printf("%d \t",c);
			c++;
			k++;
			if(k<=n)
		goto a;
	}
	else{
		int d = c;
		i = d+n-1;
		b:	
			printf("%d \t", i);	
			c++;
		i--;
		if(i>=d)
		goto b;
	}
	printf("\n");
	n--;
	if(n>=1)
		goto loop;
}
		
	
