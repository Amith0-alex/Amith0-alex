#include<stdio.h>
void main()
{
  int a[10],i,n,min,max;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter the elements of array");
  for(i=0;i<n;i++)   
    scanf("%d",&a[i]);
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++) // Start loop from i=0
    {
      if(a[i]>max)
        max=a[i];
      else if(a[i]<min)
        min=a[i];
    }
  printf("max=%d\n",max);
  printf("min=%d\n",min);
  printf("\nalex ");

}
