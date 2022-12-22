#include<stdio.h>
#include<stdlib.h>
struct pq{
	int info;
	int priority;
	struct pq* next;
};typedef struct pq pq;
pq* front=NULL;
pq* rear=NULL;
insert_pq(int value,int p)
{
	pq* neo;
	neo=(pq*)malloc(sizeof(pq));
	neo->info=value;
	neo->priority=p;
	if(front==NULL)
	{
		front=neo;
		rear=neo;
		neo->next=NULL;
		
	}
	else if(front->priority>neo->priority)
	{
		
		neo->next=front;
		front=neo;
	}
	
	else{
		pq* start=front;
		pq* temp;
		while(start->priority<=neo->priority && start->next!=NULL)
		{
			
			temp=start;
			start=start->next;
		}
		temp->next=neo;
		neo->next=start;
	}
}
delete_in_pq(){
	if(front==NULL)
	printf("underflow");
	else
	{
		int d=front->info;
		front=front->next;
		return d;
	}
	return 0;
}
int main(){
	pq* start=front;
	insert_pq(10,5);
	insert_pq(9,4);
	insert_pq(11,1);
	insert_pq(18,2);
	insert_pq(44,3);
	printf("%d ",delete_in_pq());
	printf("%d ",delete_in_pq());
	printf("%d ",delete_in_pq());
	printf("%d ",delete_in_pq());
	printf("%d ",delete_in_pq());
}

