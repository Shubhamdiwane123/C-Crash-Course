#include<stdio.h>
#include<string.h>
void print(int *,int);
int main()
{
    int str[100];
    int i,j,temp,n;
    scanf("%d",&n);
    if(n<=0 || n>=100)
    {
        printf("Beyond the range.");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",str+i);
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    print(str,n);
}
void print(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
