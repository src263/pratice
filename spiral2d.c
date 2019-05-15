#include<stdio.h>
#define R 4
#define C 6
void main()
{
	int md[R][C]={{1,2,3,4,5,6},
	               {7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
	               int r=R;
	               int c=C;
    int k=0;//for row
    int l=0;//for column
    int i;//iteration
	while(l<c&&k<r)
	{
		for(i=l;i<c;i++)
		{
			printf("%d->",md[k][i]);
		}
		k++;
			for(i=k;i<r;i++)
		{
			printf("%d->",md[i][c-1]);
		}
		c--;
		if(l<c)
		{
			for(i=c-1;i>=l;i--)
			{
					printf("%d->",md[r-1][i]);
			}
			r--;
		}
		if(k<r)
		{
			for(i=r-1;i>=k;i--)
			{
					printf("%d->",md[i][l]);
			}
			l++;
		}
		
		
		
		
		
	   }   
	               
	               
	               
	
}
