
#include<stdio.h>
int main()
{
    int i,j;
    printf ("enter the number to print n odd no. in revers order=");
    scanf("%d",&i);
    j=2*i-1;
    for(j;j>0;j=j-2)
    {
        printf(" \n %d ",j);
    }

  return 0;
}
