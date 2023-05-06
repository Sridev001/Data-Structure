#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max],top=-1;
void push()
{
    int number;
    printf("enter the element:");
    scanf("%d",&number);
    if(top==max-1)
    {
        printf("**the stack is full**");
    }
    else
    {
        top=top+1;
        stack[top]=number;
    }
}
void pop()
{
    int number;
    if(top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        number=stack[top];
        top=top-1;
    }
    printf("the elemets are:%d",number);
}
void peak()
{
    if(top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        printf("the top of the stack is:%d",stack[top]);
    }
}
void display()
{
    int i;
     if(top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("the elemets are:%d\n",stack[i]);
        }
        
    }
    
}
int main()
{
    int choice;
    do{
        printf("****THE MAIN MENU ****");
        printf("\n 1.push");
        printf("\n 2. pop");
        printf("\n 3. peak");
        printf("\n 4.display");
        printf("\n 5. exit");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peak();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            printf("enter the correct choice");
            break;
        }
    }
    while(choice>=1 && choice<=5);
} 
