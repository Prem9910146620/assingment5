
#include<stdio.h>
int main()
{
    int i,j=1,k=1;
    printf ("enter the number to print squares of first n natural number=");
    scanf("%d",&i);

     for(j;j<=i*i;j=k*k)
    {
        printf(" \n %d ",j);
        k++;


    }

  return 0;
}
