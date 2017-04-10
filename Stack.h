//
// Created by Devon Mack on 4/4/2017.
//

#ifndef RPN_STACK_H
#define RPN_STACK_H

#include <iostream>

class Stack {
    protected:
    	struct Node {
			Node* next;
			float data;
		};
        Node* head;
        Node* nn;
        float EPSILON;
    public:
        Stack();
        void push(float n);
        float pop();
        void print();
        ~Stack() { std::cout << "Unloading stack." << std::endl;};
};


#endif //RPN_STACK_H
