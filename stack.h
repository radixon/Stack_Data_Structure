	#ifndef STACK_H
	#define STACK_H
	
	#include <stdbool.h>
	#define STACK_SIZE 256
	
	typedef struct
	{
		int contents[STACK_SIZE];
		int top;
	}	Stack;
	
	void make_empty(Stack *s);
	bool is_empty(const Stack *s);
	void push(Stack *s, int i);
	int pop(Stack *s);
	
	#endif
