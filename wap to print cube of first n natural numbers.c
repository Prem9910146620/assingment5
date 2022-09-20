#include<stdio.h>
int main()
{
    int i,l=1,m=1;
    printf("enter the number to cube of natural number=");
    scanf("%d",&i);
    for(l;l<=i*i*i;l=m*m*m)
      { printf(" \n %d",l);
        m++;
      }
    return 0;
}
