#include<stdio.h>
struct Employee{
  int id;
  char name[50];
  float salary;
};
void main(){
  struct Employee e1;
  printf("Enter the id of the employee:\n");
  scanf("%d",&e1.id);
  printf("Enter the name of the employee:\n");
  scanf("%s",e1.name);
  printf("Enter the salary of the employee:");
  scanf("%f",&e1.salary);
  printf("The id of the employee is %d\n",e1.id);
  printf("The name of the employee is %s\n",e1.name);
  printf("The salary of the employee is %f\n",e1.salary);


}
