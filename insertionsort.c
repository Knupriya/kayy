//insertion sort
/* 
			key
5 6 2 9 3	6
5 6 2 9 3	2
2 5 6 9 3	9
2 5 6 9 3	3
2 3 5 6	9

*/
 
#include<stdio.h>
#define n 5
void main()
{
	int x[n],i,j,key;
	printf("Enter the elments:");
	for(i=0;i<=n-1;i++)	
		scanf("%d",&x[i]);
	for(i=1;i<=n-1;i++)
	{
		key=x[i];
		for(j=i-1;j>=0 && key<x[j];j--)
			x[j+1]=x[j];
		
		x[j+1]=key;
	}		
	for(i=0;i<=n-1;i++)
		printf(" %d",x[i]);
}   
