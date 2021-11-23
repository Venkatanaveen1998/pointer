#include<stdio.h>
void swap(int *firstnumber,int *secondnumber)
{
	int temp;
	temp=*firstnumber;
	*firstnumber=*secondnumber;
	*secondnumber=temp;
}
void printarray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d  ",*(arr+i));
}
