#include<stdio.h>
void swap(int *a,int *b){
  if(a==b)
  {
    printf("The both pointers point to the same location\n");
    return;
  }
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a=10,b=30;
  printf("Before swapping a=%d and b=%d\n" ,a,b);
  swap(&a,&b);
  printf("After swapping a=%d and b=%d\n" ,a,b);
  swap(a,b);
  printf("\n");
  printf("Praveen BS");
}
