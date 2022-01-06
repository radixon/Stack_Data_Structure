	#include <stdio.h>
	#include <stdlib.h>
	#include "stack.h"
	
	
	struct node
	{
		int data;
		struct node *next;
	};
	
	static struct node *top = NULL;
	
	static void terminate(const char *message){
		printf("%s\n", message);
		exit(EXIT_FAILURE);
	}
	
	bool is_empty(const Stack *s)
	{
		return top == NULL;
	}
	
	void make_empty(Stack *s){
		while (!is_empty(&s) )	
			pop(&s);
	}
		
	void push(Stack *s, int i){
		struct node *new_node = malloc(sizeof(struct node));
		if (new_node == NULL)
			terminate("Error in push: stack is full.");
		
		new_node->data = i;
		new_node->next = top;
		top = new_node;
	}
	
	int pop(Stack *s){
		struct node *old_top;
		int i;
		
		if (is_empty(&s))
			terminate("Error in pop: stack is empty.");
		
		old_top = top;
		i = top->data;
		top = top->next;
		free(old_top);
		return i;
	}
	
	
	int main(void){
		
		
		Stack money;
		push(&money, 3);
		push(&money, 6);
		push(&money, 9);
		push(&money, 12);
			
		printf("The value popped: %d\n", pop(&money));
		
		for(int i = 0; i <=5; i++)
		{
			push(&money,i*i);
		}
		
		printf("The value popped: %d", pop(&money));
		make_empty(&money);
		
		
		return 0;
	}
