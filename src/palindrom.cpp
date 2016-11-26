#include "palindrom.h"

bool is_palindrom(CNode* head) {
	int size = 0;
	CNode* node = head;

	while (node != 0) {
		size++;
		node = node->next;
	}
	node = head;
	CNode* mas = new CNode[size];

	for (int i = 0; i < size; i++) {
		mas[i] = node->data;
		node = node->next;
	}
	
	int mid = size / 2;
	for (int i = 0; i < mid; i++) {
		if (mas[i].data != mas[size - 1 - i].data)
			return false;
	}

	return true;
}