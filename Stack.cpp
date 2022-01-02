	#include <iostream>
	
	class Node{
		public:
			int data;
			Node *next;
	};
	
	class Stack : public Node{
		private:
			Node *top;
		public:
			
			// Constructor
			Stack();
			
			//Destructor
			~Stack();
			
			bool isEmpty();
			void push(int value);
			int pop();
			void peek();
	};
	
	// Constructor
	Stack::Stack(){
		this->top == nullptr;
	}
	
	// Destructor
	Stack::~Stack(){
		std::cout << "Destructor Called!" << '\n';
		while(!isEmpty()){
			pop();
		}
	}
	
	// Operation to check if Stack is empty
	bool Stack::isEmpty(){
		return top == nullptr;
	}
	
	// Push Operation
	void Stack::push(int value){
		Node *create = new Node;
		create->data = value;
		create->next = top;
		top = create;
	}
	
	// Pop Operation
	int Stack::pop(){
		if(isEmpty()){
			std::cout << "underflow" << '\n';
			exit(1);
		}
		else{
			int value = top->data;
			Node *destroy = top;
			top = destroy->next;
			delete destroy;
			return value;
		}
	}
	
	// Peek Operation
	void Stack::peek(){
		if(!isEmpty()){
			std::cout << top->data << '\n';
		}
		else{
			std::cout << "No Value" << '\n';
		}
	}
	
	int main(){
		
		int value(0);
		
		Stack money;
		money.push(3);
		std::cout << "What value is at the top of the stack: ";
		money.peek();
		for(int i = 0; i <=5; i++){
			money.push(i*i);
		}
		 value = money.pop();
		 std::cout << "The value popped: " << value << '\n';
		 std::cout << "What value is at the top of the stack: ";
		 money.peek();
		
		return 0;
	}
