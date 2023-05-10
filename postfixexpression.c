#include<stdio.h>

#include<ctype.h>
#include<string.h>

int stk[20];
int top =-1;


void push(int val)
{
	stk[++top] = val;
}

int pop()
{
	return(stk[top--]);
}



main()
{
	int op1,op2,len,result,i;
	char postfix[30],op;
	
    printf("\nEnter the postfix expresstion : ");
	gets(postfix); 
	
	len=strlen(postfix);
	
	for(i=0 ;i<len ; i++)
	{
		if( isdigit(postfix[i]))
	   	      	  	  push(postfix[i]-'0');
		else
		{
			op=postfix[i];
			op2=pop();
			op1=pop();
			
			switch(op)
			{
				case '+': push(op1+op2);
						  break;
				case '-': push(op1-op2);
						  break;
				case '*': push(op1*op2);
						  break;
				case '/': push(op1/op2);
						  break;
				case '%': push(op1%op2);
						  break;
			}
			
		}	 	 
	}
	
	result=pop();	 
	printf("The evaluated value is = %d",result);	 
	
}
