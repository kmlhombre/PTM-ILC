#pragma once
#include <iostream>

class Vec {
	struct Node {
		int value;
		Node* next;
	};
	Node* head;
	Node* tail;

public:
	Vec();
	void push_back(int x);
	void pop_first();
	void display();
};