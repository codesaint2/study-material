/**************************************************************************************
*   CIRCULAR MATRIX PROBLEM (TCS CODEVITA 2018, 2nd Round, "ABHIMANYU & CHAKRAVYUH")  *
* 																                      *
*	Input : 1    2      3        4             5                                      *
*                                                                                     *
*   Output: 1    1 2    1 2 3    1  2  3  4    1  2  3  4  5                          *
*                4 3    8 9 4    12 13 14 5    16 17 18 19 6                          *
*                       7 6 5    11 16 15 6    15 24 25 20 7                          *
*						         10 9  8  7    14 23 22 21 8                          *
*                                              13 12 11 10 9                          *
*                                                                                     *
*   Input contains a Single Integer N.                                                *
*   where, 1 <= N <= 25.                                                              *
**************************************************************************************/

#include <stdio.h>
#define N 25

int main(void) {
	int n;
	scanf("%d", &n);
	
	int a[N][N]; 
	
	int count = 0;
	int sub = 0;
	int i = 0;
	int j = 0;
	
	while(1) {
		i = sub;
		for(j = sub; j < n-sub; j++) 
			a[i][j] = ++count;
		if(count == n*n) break;
		
		j = n-1-sub;
		for(i = 1+sub; i < n-sub; i++)
			a[i][j] = ++count;
		if(count == n*n) break;
			
		i = n-1-sub;
		for(j = n-2-sub; j >= sub; j--)
			a[i][j] = ++count;
		if(count == n*n) break;
		
		j = sub;
		for(i = n-2-sub; i >= sub+1; i--)
			a[i][j] = ++count;
		if(count == n*n) break;
		
		sub++;
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
