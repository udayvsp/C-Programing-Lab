//WAP to check the given number is armstrong or not by using while loop.

#include <stdio.h>
#include <math.h>
int main()
{

    int num,digit,original,sum=0,count=0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    original= num;

    while (original!= 0) {
        original/= 10;
        count++;
    }

    original = num;

    while (original!= 0) {
        digit = original % 10;
        sum += pow(digit,count);
        original/= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n",num);
    else
        printf("%d is not an Armstrong number.\n",num);
    
    return 0;
}