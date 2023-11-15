#include<stdio.h>
int main()
{
    int n,max,num;
    printf("enter the no. of elements: ");
    scanf("%d",&n);
    printf("enter number 1: ");
    scanf("%d",&max);
    for(int i=2;i<=n;i++)
    {
        printf("enter numbers %d: ",i);
        scanf("%d",&num);
        if (num>max)
        {
            max=num;
        }
    }
    printf("the maximum number is %d\n",max);
    return 0;
}