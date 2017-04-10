//
// Created by Devon Mack on 4/4/2017.
//

#include "Stack.h"

using namespace std;

Stack::Stack() {
	head = NULL;
    EPSILON = 0.000000001;
}

float Stack::pop() {
    float ret;
    if (head != NULL) {
    	ret = head->data;
    	
		Node* temp = head->next;
		delete head;
		head = temp;
		
    } else {
        cout << "[Warning] Popping from empty stack (will give 0)" << endl;
        return 0;
    }

    return ret;
}

void Stack::push(float n) {
    nn = new Node;
    nn->data = n;
    nn->next = head;
    
	head = nn;
}

void Stack::print() {
    Node* loop = head;
    cout << "Stack---" << endl;
    while (loop && loop->next != NULL) {
    	cout << loop->data << endl;
    	loop = loop->next;
    }
    if (loop) {
    	cout << loop->data << endl;
	}
    
    cout << "---" << endl;
}

/*Stack::~Stack() {
	cout << "destroy";
}*/

