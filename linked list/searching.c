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
search(int key)
{
	
	int c=1;
	node *start;
	start=head;
	while(start->data!=key)
	{
		start=start->next;
		c++;
	}
	return c;
}
int main()
{
	insert(10);
	insert(60);
	insert(45);
	insert(70);
	insert(100);
	insert(3);
	insert(40);
	node *start=head;
	printf("the linked list is\n");
	while(start!=NULL)
	{
		printf("%d->",start->data);
		start=start->next;
	}
	int l=search(70);
	printf("\nthe element is found at %d",l);
	
}
