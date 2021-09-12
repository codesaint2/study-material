/*****************************************************************************************
Problem : Square in a Square

Idea is to take a number as input and print a pattern of boxes If input is 2, 
two boxes are to be printed - one inside the other Smallest box will be of size 3x3, 
the next bigger box will be 5x5, the next one will be 7x7, so on and so forth For input 1,
then draw a box of dimensions 3x3 For input 2, outer box will be 5x5, 
inner will be 3x3 For input 3, outer box will be 7x7, with 2 more inner boxes So for n, 
outermost box will be nx2 +1 in size, with (n-1) inner boxes All boxes will be 
top left aligned as shown in the figure.

Input Format: First line of input contains a number N

Output Format: Print N nested boxes

Constraints: 0 < N < 25

Sample Input: 2
Sample Output:
*****
* * * 
*** *
*   *
*****

Time Limit: 5
Memory Limit: 256
*****************************************************************************************/

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