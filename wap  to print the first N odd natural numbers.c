
#include<stdio.h>
int main()
{
    int i,j=1;
    printf ("enter the number to print n odd natural no.=");
    scanf("%d",&i);
    for(j=1;j<=2*i;j=j+2)
    {
        printf(" \n %d ",j);
    }

  return 0;
}
