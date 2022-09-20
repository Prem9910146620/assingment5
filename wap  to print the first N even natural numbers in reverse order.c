
#include<stdio.h>
int main()
{
    int i,j;
    printf ("enter the number to print n even natural no. in reverse order=");
    scanf("%d",&i);
    j=2*i;
     for(j;j>1;j=j-2)
    {
        printf(" \n %d ",j);
    }

  return 0;
}
