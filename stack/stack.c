#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isEmpty() {

   if(top == -1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
   
int isFull() {

   if(top == MAXSIZE)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

int peek() {
   return stack[top];
}

int pop() 
{
   int data = -1;
	
   if(!isEmpty()) 
   {
      data = stack[top];
      top = top - 1;   
   } 
   else 
   {
      printf("Empty stack.\n");
   }

   return data;
}

void push(int data) {

   if(!isFull()) 
   {
      // TODO implement push
   } 
   else 
   {
      printf("Stack overflow.\n");
   }
}

int main() {
	
   // TODO fill stack with random integers using push

   // TODO print the top element of the stack
	
   // TODO pop and print all items in the stack
   
   return 0;
}
