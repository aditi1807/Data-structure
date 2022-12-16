#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};typedef struct node node;
node *head=NULL;
insert(int key){
node *new_node, *start;
new_node=(node*)malloc(sizeof(node));
new_node->data=key;
start=head;
if(start==NULL)
{
	new_node->next=NULL;
	head=new_node;
}
else{
	while(start->next!=NULL)
	{
		start=start->next;
	}
	start->next=new_node;
	new_node->next=NULL;
}
}
deletion(int pos)
{
	int c=1;
	node* start;
	start=head;
	while(c!=pos)
	{
		start=start->next;
		c++;
	}
	start->next=start->next->next;
}
int main()
{
	insert(10);
	insert(60);
	insert(45);
	node *start=head;
	while(start!=NULL)
	{
		printf("%d->",start->data);
		start=start->next;
	}
	deletion(2);
	start=head;
	printf("\n after deletion \n");
	while(start!=NULL)
	{
		printf("%d->",start->data);
		start=start->next;
	}
	
}
