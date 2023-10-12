package com.app.core;

public class FixedStack implements Stack {
	int cnt = -1;
//	FixedStack[] fixed = new FixedStack[STACK_SIZE];
	Customer[] cust = new Customer[STACK_SIZE];
	@Override
	public void push(Customer c) {
		if(cnt<STACK_SIZE) {
			cust[++cnt]= c;
	    	System.out.println("Customer added into Fixed Stack");
		}
		else
			System.out.println("FixedStack is full");
	}
	
	public void pop() {
		if(cnt<0)
			System.out.println("Stack is empty");
		else
			System.out.println(cust[cnt]);
			cust[cnt--]=null;
		
	}
}
