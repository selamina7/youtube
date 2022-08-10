#include <stdio.h>
 int stack[10], top=-1, choice;
 
 void push();
 void pop();
 void peep();
 void change();
 void display();
 void isFull();
 void isEmplty();
 
 int main()
 {
     
     printf("...........choose any operation from the following lists.........\n");
     printf("\t1. push\n\t2.pop\n\t3.peep\n\t4.change\n\t5.display\n\t6.isFull\n\t7.isEmpty\n\n choosen number is: ");
     
     scanf("%d",&choice);
     
     switch(choice)
     {
         case 1: printf("enter a number to be inserted:") ;
                 push();
                 break;

         case 2: pop();
                break;
     }
     
     
     
      }
 
 
 void push()
    {
        int value;
        if(top==9)
        {
            printf("stack overflow");
            return;
        }
        else
        {
            top=top+1;
            scanf("%d",&value);
            stack[top]=value;
        }

    }
     
 void pop()
 {
     int temp;
     if(top==-1)
     {
         printf("stack underflow");
         return;
     }
     else
     {
        temp=stack[top];
         top=top-1;
         printf("deletion has been done successfully");
         
         
     }
 }
 void  peep()//prints the top most element of stack
 {
    if(top==-1)
    {
        prinft("stack underflow");
        return;
    }
    else
    {
        printf("topper most element is %d", stack[top]);
    }

 }

 void change()
 {
 int pos, value;
 if(top-pos<=-1)
 {
    printf("stack underflow");
 }
 else
 { 
    prinft("enter new value: ");
    scanf("%d",&value);
    stack[pos]=value;
    
     printf("")
  
  }

 }