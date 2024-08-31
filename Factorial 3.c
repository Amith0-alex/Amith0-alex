#include<stdio.h>
void main()
{
  int n1,n2,n3,sum=0,avg=0;
  printf("Enter the 3 numbers/n");
  scanf("%d%d%d",&n1,&n2,&n3);
  sum=n1+n2+n3;
  printf("\ the total sum is %d ",sum);
  avg=sum/3;
  printf("\nThe average of sum is %d",avg);
}
