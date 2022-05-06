#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
	
}*first,*last;


void addAtLast(int item)
{
	if(first==NULL)
	{
		first=last=(struct node*)malloc(sizeof(struct node));
		first->data=item;
	}
	
	else
	{
		last->next=(struct node*)malloc(sizeof(struct node));
		last=last->next;
		last->data=item;
	}
	
	last->next=NULL;
	
}

void display()
{
	struct node* n=first;
	putchar('\n');
	
	while(n!=NULL)
	{
		printf("%d ",n->data);
		n=n->next;
	}
}

void addAtFirst(int item)
{
	struct node* n=(struct node*)malloc(sizeof(struct node));
	
	n->data=item;
	
	n->next=first;
	first=n;
	
}

int main()
{
	addAtLast(1);
	addAtLast(2);
	addAtLast(3);
	addAtFirst(5);
	
	display();
	
	
	return 0;
}
