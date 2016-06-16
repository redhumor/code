#include "node.h"
void reverse(node * head, int k) {
	node * newhead = head;
	node * current = head;
	while(current ->next != NULL) {
		for(int i = 0; i < k - 1; ++i) {
			node * temp = current ->next;
			if(temp != NULL) {
				current->next = temp->next;
				temp->next = newhead;
				newhead = temp;
			} else {
				break;
			}
		}
		if(count == 0) {
			totalNewHead = newhead;
			pre = current;
		} else {
			pre->next = newhead;
			pre = current;
		}
	}
}
