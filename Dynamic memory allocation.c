#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char *name;
  name=malloc(7);
  name=realloc(name,77);
  strcpy(name," Alex");
  printf("%s",name);
  free(name);
  return 0;
}
