#include "vec.h"

Vec::Vec() {
	head = nullptr;
	tail = nullptr;
}

void Vec::push_back(int x) {
	Node* temp = new Node();
	temp->value = x;
	temp->next = nullptr;

	if (head == nullptr) {
		head = temp;
		tail = temp;
	}
	else {
		Node* ex_tail = tail;
		tail = temp;
		ex_tail->next = tail;
	}
}

void Vec::pop_first() {
	if (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void Vec::display() {
	Node* temp = head;
	while (temp != nullptr) {
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
}
