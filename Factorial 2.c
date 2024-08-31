#include<stdio.h>
void main()
{
  int i=1,n,fact=1,rem;
  printf("enter the number\n");
  scanf("%d",&n);
  while(i<=n)
    {
      fact=fact*i;
      i++;
    }
  printf("%d",fact);
  rem=fact%10;
  printf("\n the remainder  is %d\n",rem);
}

