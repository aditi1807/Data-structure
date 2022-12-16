#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};typedef struct node node;
node *head=NULL;
void insert_begin()
{
	node *NEW1;
	NEW1=(node*)malloc(sizeof(node));
	printf("enter the number to be inserted ");
	scanf("%d",&NEW1->info);
	NEW1->next=head;
	head=NEW1;
}


int main()
{
	
	insert_begin();
	insert_begin();
	insert_begin();
	node *start;
	start=head;
	 while(start!=NULL)
                {
                        printf("%d ",start->info );
                        start=start->next ;
                }
	
	
}




