#include<stdio.h>
#include"cpyarray.h"
void copyarray(int *a,int n)
{
	int b[n],i;
	for(i=0;i<n;i++)
		b[i]=a[i];
	printf("after copy data into second array\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
}
