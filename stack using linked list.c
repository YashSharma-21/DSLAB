#include<stdio.h>
#include<malloc.h>

struct node
{
	char data;
	struct node* next;
}*top=NULL;

void push(char value)
{
	struct node* n=(struct node*)malloc(sizeof(struct node));
	n->data=value;
	
		n->next=top;
		top=n;
	
}

void display()
{
	
	struct node* n=top;
	printf("\n");
	
	
	while(n!=NULL)
	{
		printf("%c ",n->data);
		
		if(n==top)
		printf(" <--TOP ");
		
		n=n->next;
		
		printf("\n");
	}
}

int pop()
{
	char result;
	struct node* n=top;
	
	if(top==NULL)
	{
		printf("\nStack is Underflowing ");
		return -1;
	}
	
	else
	{
		top=top->next;
		
		
		
		result=n->data;
		
		
		free(n);
		
	}
	
	
	
	return result;
}

int main()
{
	
	char input[100];
	int i;
	
	printf("Enter an infix expression ");
	gets(input);
	
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i]=='(')
		push('(');
		
		else if(input[i]==')')
		{
			if(top==NULL)
			{
				printf("\nExpression is not balanced ");
				return 0;
			}
			
			else 
			{
				pop();
			}
		}
		
	}
	
	
	if(top!=NULL)
	printf("\nExpression is not balanced ");
				
				
	else printf("\nExpression is balanced ");


	
	return 0;
}
