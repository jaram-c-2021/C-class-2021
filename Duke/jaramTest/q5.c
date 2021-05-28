#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

 
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* prev = NULL;
	struct ListNode* nextNode;
	struct ListNode* current = head;

		while (current) {
			nextNode = current->next;
			current->next = prev;
			prev = current;
			current = nextNode;
		}
	return prev;

}

int main() {
	struct ListNode p[5];
	//struct reverseList *x = malloc(sizeof(struct ListNode));
	struct ListNode *x;
	for(int i=0; i<5; ++i) {
		p[i].val = i;
		p[i].next = &p[i+1];
	}
	p[4].next = NULL;
	x = reverseList(p);
	printf("%d\n", x->val);
	return 0;
}
