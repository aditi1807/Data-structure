#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};typedef struct node node;
node *head=NULL;

insert_end()
{
	node *NEW1, *start;
	NEW1=(node*)malloc(sizeof(node));
	printf("enter the number to be inserted ");
	scanf("%d",&NEW1->info);
	start=head;
	if(start==NULL)
	{
		NEW1->next=start;
		head=NEW1;
		
			}
			else{
			
	while(start->next!=NULL)
	{
		start=start->next;
	}
	start->next=NEW1;
	NEW1->next=NULL;
	}
}


int main()
{
	insert_end();
	insert_end();
	insert_end();
	
	node *start;
	start=head;	
	 while(start!=NULL)
        {
            printf("%d ",start->info );
            start=start->next ;
    }
	
	
}
