#include<stdio.h>
#include<stdlib.h>
struct pq{
	int info;
	int priority;
	struct pq *next;
};typedef struct pq pq;
pq* front=NULL;
pq* rear=NULL;
enqueue(int key,int p)
{
	pq* NEW;
	NEW=(pq*)malloc(sizeof(pq));
	NEW->info=key;
	NEW->priority=p;
	if(front==NULL && rear==NULL)
	{
		NEW->next=NULL;
		front=NEW;
		rear=NEW;
	}
	else{
		rear->next=NEW;
		rear=rear->next;
		NEW->next=NULL;
	}
}
dequeue()
{
	
	int p=-1;
	pq* start=front;
	while(start!=NULL)
	{
		if(start->priority>p)
		{
			p=start->priority;
		}
		start=start->next;
	}
	printf("%d ",p);
	start=front;
	if(start->priority==p)
	{
		printf("key=%d\n",start->info);
		front=start->next;
	}
	else{
	while(start->next->priority!=p)
	{
		start=start->next;
	}
	printf("key=%d\n",start->next->info);
	start->next=start->next->next;
	}
	
}
int main()
{
	enqueue(10,5);
	enqueue(40,4);
	enqueue(30,1);
	enqueue(7,2);
	enqueue(4,3);
	pq* start;
	start=front;
	while(start!=NULL)
	{
		printf("key=%d  priority=%d\n",start->info,start->priority);
		start=start->next;
	}
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	
}
