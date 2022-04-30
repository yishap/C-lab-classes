// question 5 printing upper diagonal of a matrix
#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int a[x][y];
	
	for(int i = 0; i<x;i++){
		for(int j=0; j<y; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int c = 0;
	for(int i = 0; i<y; i++){
		for(int k=0;k<c;k++){
			printf(" ");
		}
		c++;
		
		for(int j = i; j<y; j++){	
			printf("%d",a[i][j]);
		}	
		printf("\n");
	}
}
