 #include<stdio.h>
 union book{
 int num;
 char name[100];
 float price;
 };
 int main()
 {
   union book ab;
   ab.num=2;
   ab.price=1500.0;
   strcpy(ab.name,"Psychology of money");
   printf("Book number: %d\n",ab.num);
   printf("Book name: %s\n",ab.name);
   printf("Book price: %f\n",ab.price);
   printf("NAME: Alex");
   return 0;
 }
