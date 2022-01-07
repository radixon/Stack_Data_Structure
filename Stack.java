package com.example.stack;

public class Stack {
    private static class Node{
        private int data;
        private Node next;
        private Node(int data){
            this.data = data;
        }
    }

    private Node top;  // Top of the Stack

    public boolean isEmpty(){
        return top == null;
    }

    public void makeEmpty(){
        System.out.print("This method makes the stack empty");
        while(!isEmpty()){
            pop();
        }
    }

    public int peek(){
        return top.data;
    }

    public void push(int data){
        Node node = new Node(data);
        node.next = top;
        top = node;
    }

    public int pop(){
        int data = top.data;
        top = top.next;
        return data;
    }
}

class MyMainClass{
    public static void main(String[] args){

        int value = 0;
        value = 3;

        Stack money = new Stack();
        money.push(value);
        money.peek();

        for(int i = 0; i < 5; i++){
            value = i*i;
            money.push(value);
        }

        System.out.println(money.pop());
        System.out.println(money.peek());
        money.makeEmpty();
    }
}
