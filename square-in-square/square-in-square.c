#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	for(int i=0; i < 2*n + 1; i++) {
		for(int j=0; j < 2*n + 1; j++) {
			if(i==0 || i==2*n || j==0 || j==2*n || (i%2==0 && j<=i) || (j%2==0 && i<=j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}