#include <string.h>
#include <iostream>
using namespace std;
class node {
	public:
		node(int a) {
			next = NULL;
			value = a;
		}
		int value;
		node * next;
};
node* findMiddle(node * head) {
	if(head == NULL)
		return NULL;
	node * start = head;
	node * step2 = head;
	while(step2 != NULL &&step2->next != NULL) {
		step2 = step2->next->next;
		start = start->next;
	}
	return start;
}

bool check(node * &a, node *b) {
	if(b->next != NULL)
		if(!check(a, b->next))
			return false;
	if(a->value == b->value) {
		a = a->next;
		return true;
	} else 
		return false;
}
bool isPalindrome(node * a) {
	if(a == NULL || a -> next == NULL)
		return true;
	node * b = a;
	return check(a, b);
}
int main() {
	node * a= new node(1);
	node * b= new node(2);
	node * c= new node(2);
	node * d= new node(1);
	a->next =b;
	b->next =c;
	c->next = d;
	cout<<isPalindrome(a)<<endl;
}
