#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++,printf("\n"))
		for(j=1;j<=5;j++)
			(j<i)?printf("_"):printf("*");
}
//*****
//_****
//__***
//___**
//____*
