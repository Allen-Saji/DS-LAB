//Queue Implementation

#include<stdio.h>
#include<stdlib.h>
int queue[100],rear=-1,size,front=-1;

void enqueue()
{
    int item;
    if(rear==size-1)
    {
        printf("Queue Overflow");
    }
   else
	{
	if(front== - 1){
	front = 0;
	}
	
	printf("Enter the element to insert: ");
       scanf("%d",&item);
	
	rear++;
	queue[rear] = item;
	}
}

void dequeue()
{
    int item;
    if(rear==-1)
    {
        printf("Queue Underflow");
    }
   else
	{
	printf("Element deleted from the queue is: %d\n", queue[front]);
	if(rear==front){
		rear=front=-1;
	}else
	front++;
	
 }
}
void display()
{
    int i;
    if(front ==-1)
    {
        printf("Queue is empty \n\n");
    }
    else
  {   
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
  }
}


int main()
{
    int n;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
     while(n!=4)
    {
    	printf("\n\nChoose the required operation: ");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:enqueue();
         break;
         case 2:dequeue();
         break;
         case 3:display();
         break;
         case 4:
         {
                printf("\nSuccessfully Exited!\n");
                break;
         }
        default:
        printf("\ninvalid input!\n");
            break;
       }
    }
}
