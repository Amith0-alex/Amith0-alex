 #include<stdio.h>
 void swapbyvalue(int a,int b){
   int temp=a;
   a=b;
   b=temp;
   printf("swap by value: %d %d\n",a,b);
 }
 void swapbyref(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
   printf("swap by reference: %d %d\n",*a,*b);
 }
 void main(){
   int a=10,b=20;
   printf("Before swap: %d %d\n",a,b);
   swapbyvalue(a,b);
   printf("Before swap by value: %d %d\n",a,b);
   swapbyvalue(a,b);
   printf("After swap by value: %d %d\n",a,b);
   printf("\n");
   printf("alex\n");


 }
