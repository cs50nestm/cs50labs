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
   // return value from top of stack, otherwise return -1 and print error message
   int data = -1;
	
   if(!isEmpty()) 
   {
	   
      // TODO implement pop
  
   } 
   else 
   {
      printf("Empty stack.\n");
   }

   return data;
}

void push(int data) {
   // push data onto the top of the stack, if full print error message
   if(!isFull()) 
   {
	   
      // TODO implement push
	   
   } 
   else 
   {
      printf("Cannot push, stack overflow would occur.\n");
   }
}

int main() {
	
   // TODO fill stack with random integers using push

   // TODO print the top element of the stack using peek
	
   // TODO pop and print all elements in the stack
   
   return 0;
}
