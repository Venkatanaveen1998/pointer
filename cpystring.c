#include<stdio.h>
#include<string.h>
#include"cpystring.h"
int main()
{
	char str1[25]="thundersoft",str2[25];
	printf("before copy the data in first string\n");
	printf("%s\n",str1);
	stringcopy(str1,str2);
	printf("after copy the data into string and also length\n");
	printf("newstring=%s\n",str2);
	printf("length of new string=%d\n",strlen(str2));

}


