// WAP to check the given number is prime or not using a while loop.
#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==1){
        printf("It is a prime");
    }
    else{
        printf("It is not a prime");
    }
    return 0;
}