#include<stdio.h>

int main()
{
	int it,i=0,j=0;
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}},n=3;
	//int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},n=4;
	while(i!=n/2)
	{

		for(it=j;it<n-j;it++)
				printf(" %d",a[i][it]);

		for( it=i+1;it<n-i;it++)
				printf(" %d",a[it][n-j-1]);

	    for(it=n-j-2;it>j;it--)
				printf(" %d",a[n-i-1][it]);

		for(it=n-i-1;it>i;it--)
				printf(" %d",a[it][j]);

	    i++;
		j++;
	}
	if(n%2!=0)
	printf(" %d",a[i][i]);
}
