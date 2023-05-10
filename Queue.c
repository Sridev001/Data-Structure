#include<stdio.h>
#include<stdlib.h>
#define size 5

int QUE[size],front=-1,rear=-1;
void Enque()
{
	int ele;
	printf("enter the element:");
    scanf("%d",&ele);
    
	if(rear==size-1)
    {
    	printf("QUE is full");
	}
	else 
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
		}
		else
			rear=rear+1;
			QUE[rear]=ele;
		
	}
}

void Deque()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		printf("QUE is empty");
	}
	else
	{
		ele=QUE[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
			printf("the deletion element is %d",ele);
		}
	}
}

void Display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("QUE is empty");
    }
    else
    {
    	printf("\nThe Queue elemets \n");
    	for(i=front;i<=rear;i++)
    	{
    		 printf("%d\t",QUE[i]);
		}
	}
}


int main()
{
    int choice;
    do{
        printf("\n****THE MAIN MENU ****\n");
        printf("\n 1.Enque");
        printf("\n 2. Deque");
        printf("\n 3.Display");
        printf("\n 4. exit");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Enque();
            break;
            case 2:Deque();
            break;
            case 3:Display();
            break;
            case 4:exit(0);
            printf("enter the correct choice");
            break;
        }
    }
    while(choice>=1 && choice<=4);
} 
