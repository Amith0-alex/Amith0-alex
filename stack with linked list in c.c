  #include<stdio.h>
  #include<limits.h>
  #include<stdlib.h>
  struct Node
  {
  int data;
  struct Node *next;
  };
  struct Node* Createnode(int data)
 {
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(!newNode)
    {
      printf("Momory allocation failed\n");
      return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
    }
  void push(struct Node**top,int data){
    struct Node* newNode=Createnode(data);
    if(!newNode){
      return;
    }
    newNode->next = *top;
    *top = newNode;
    printf("%d pushed to stack\n",data);
  }
  int pop(struct Node** top){
    if(*top == NULL){
      printf("Stack id Empty\n");
      return INT_MIN;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = temp->next;
    return poppedValue;
  } 
 int beginning(struct Node* top){
   if(top == NULL){
     printf("Stack is Empty\n");
     return INT_MIN;
     }
       return top->data;  
     }
    int end(struct Node* top) 
    {
     if(top == NULL){
       printf("Stack is Empty\n");
       return INT_MIN;
       }
         struct Node*current = top;
         while(current->next != NULL){
           current = current->next;
         }
         return current->data;
       }
       int peek(struct Node* top){ 
         if(top == NULL){
           printf("Stack is Empty\n");
           return INT_MIN;
         }
         return top->data;
       }
       int main(){
         struct Node* top = NULL;
         push(&top,10);
         push(&top,20);
         push(&top,30);
         push(&top,40);
         push(&top,50);
         printf("Top element: %d\n",peek(top));
         printf("Beginning element: %d\n",beginning(top));
         printf("End element: %d\n",end(top));
         printf("Popped element: %d\n",pop(&top));
         printf("Popped element: %d\n",pop(&top));
         printf("Top element after pop: %d\n",peek(top));
         return 0;
       }