/*evaluevation of expression*/
#include<stdio.h>
int main()
{
    float a,b,c,y,x,z;
    a=9;
    b=12;
    c=3;
    if (c<10);
    printf("c value is zero");
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x=%f\n",x);
    printf("y=%f\n",y);
    printf("z=%f\n",z);
    return 0;
}