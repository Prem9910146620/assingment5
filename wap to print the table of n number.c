#include<stdio.h>
int main()
{
    int i,j=1,b;
    printf("enter the number for table of number=");
    scanf("%d",&i);
    b=i;

    for(b;b<=10*i;b=i*j)
    {
        printf(" \n %d",b);
        j++;
    }

    return 0;
}
