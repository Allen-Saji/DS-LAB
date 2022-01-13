#include <stdio.h>
#include <stdlib.h>

struct node {
 int data;
 struct node* next;

};
struct node* head;

void add_at_beginning();
void add_at_end();
void add_at_any_position();
void delete_at_beginning();
void delete_at_end();
void delete_at_any_position();
void display();
int main()
{	
	int ch,ins,del;
	while(1)
	{
		
		
		printf("1.Insertion\n");
		printf("2.Deletion\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Choose an option\n");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			
			
			printf("1.Add at beginning\n");
			printf("2.Add at end\n");
			printf("3.Add at a position\n");
			
			printf("Choose an option from above\n");
			scanf("%d",&ins);
			switch(ins)
			{
				case 1: add_at_beginning();
				break;
				
				case 2: add_at_end();
				break;
				
				case 3: add_at_any_position();
				break;
			}
		}
		
		if(ch == 2)
		{
			
			
			printf("1.Delete at beginning\n");
			printf("2.Delete at end\n");
			printf("3.Delete at a position\n");
			
			printf("Choose an option from\n");
			scanf("%d",&del);
			
			switch(ins)
			{
				case 1: delete_at_beginning();
				break;
				
				case 2: delete_at_end();
				break;
				
				case 3: delete_at_any_position();
				break;
			}
		}
		switch(ch){
				
		   case 3:display();
		
		   case 4:exit(0);
		   }
	
	
	
	}

}

void add_at_beginning()
{
	struct node* ptr;
	int item;
	ptr = (struct node*) malloc(sizeof(struct node*));
	if(ptr == NULL)
	{
		printf("\n Overflow\n");
		
	}
	else
	{
		printf(" Enter value\n");
		scanf("%d",&item);
		ptr->data = item;
		ptr->next = head;
		head = ptr;
		printf("Node inserted\n");
	}
}	
	
void add_at_end()
{
	struct node* ptr,*temp;
	int item;
	ptr = (struct node*) malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		printf(" Enter value\n");
		scanf("%d",&item);
		ptr->data = item;
		if(head == NULL)
		{
			ptr ->next = NULL;
			head=ptr;
			printf("Node inserted");
		}
	
		else
		{	
		temp = head;
		while(temp->next!=NULL)
		{
			temp = temp ->next;
		}
		temp->next = ptr;
		ptr->next = NULL;
		printf("Node inserted");
		}
	}
}
void add_at_any_position()
{
	int i,loc,item;
	struct node* ptr,*temp;
	ptr = (struct node*) malloc(sizeof(struct node));
	
	if(ptr == NULL)
	{
		printf("Overflow\n");
	}
	else
	{
	printf(" Enter value\n");
	scanf("%d",&item);
	ptr->data = item;
	printf("Enter the location you want to insert\n");
	scanf("%d",&loc);
	temp=head;
	for(i=0;i<loc;i++)
	{
		temp = temp->next;
		if(temp==NULL)
		{
			printf("Can't insert\n");
			return;
		}
	}
	ptr->next = temp->next;
	temp->next = ptr;
	printf("Node inserted");
	}	
}
void delete_at_beginning()
{
	struct node *ptr;
	if(head == NULL)
	{
		printf("List is empty");
	}
	else
	{
		ptr=head;
		head = ptr->next;
		free(ptr);
		printf("Node deleted from the beginning\n");	
	}
}
void delete_at_end()
{
	struct node* ptr,*ptr1;
	if(head == NULL)
	{
		printf("List is empty");
	}
	else if(head->next = NULL)
	{
		head = NULL;
		free(head);
		printf("Only node of the lis t is deleted \n");
	}
	else
	{
		ptr = head;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr = ptr->next;
		}
		ptr->next=NULL;
		free(ptr);
		printf("Deleted node from the last\n");
	}
}
void delete_at_any_position()
{
	struct node* ptr1,*ptr,*temp;
	int loc,i;
	printf("Enter the location you want to delete\n");
	scanf("%d",&loc);
	ptr = head;
	for(i=0;i<loc;++i)
	{
		ptr1 = ptr;
		ptr = ptr->next;
		if(temp==NULL)
		{
			printf("Can't delete\n");
			return;
		}
	}
	ptr1->next = ptr->next;
	free(ptr);
	printf("The deleted node %d",loc+1);
}
void display()
{
	struct node *ptr;
	ptr = head;
	if(ptr == NULL)
	{
		printf("Nothing to print");
	}
	else
	{
		printf("printing the values\n");
		while(ptr!=NULL)
		{
			printf("Data ==>>%d\n",ptr->data);
			ptr= ptr->next;
		}	
	}
}

































