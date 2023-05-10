#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

char stk[50];
int top =-1;

void push(char c)
{
	stk[++top]=c;
}

char pop()
{
	return(stk[top--]);
}
int main()
{
	int i;
	char exp[30];
	
    printf("\nEnter the expretion : ");
	gets(exp); 

	for (i=0; exp[i] !='\0'; i++)
	{
		if(exp[i]>='a'&&exp[i]<='z'||
		   exp[i]>='A'&&exp[i]<='Z'||
		   exp[i]>='0'&&exp[i]<='9'||
		   exp[i]=='+'||exp[i]=='-'||
		   exp[i]=='*'||exp[i]=='/'||exp[i]=='%')
				continue;
		
	    else if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			push(exp[i]);

		else if( exp[i]==')'  && (stk[top] == '(') ||
				 exp[i]=='}'  && (stk[top] == '{') ||
				 exp[i]==']'  && (stk[top] == '['))  
					top--;
			
		else
				{
					printf("\n Unbalanced Expression");
					exit(0);
				}
				
	}
	
	
	if (top==-1)	
		printf("\nBalanced");
	else
		printf("\nUn Balanced");
			
}
