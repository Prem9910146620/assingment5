#include<stdio.h>
int main()
{
    int i,j=2;
    printf ("enter the number to print n even natural no.=");
    scanf("%d",&i);

    for(j=2;j<=2*i;j=j+2)
    {
        printf(" \n %d ",j);
    }

  return 0;
}

