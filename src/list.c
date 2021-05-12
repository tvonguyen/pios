# include <stddef.h>
# include "list.h"

// from neil
// listAdd
// adds newElement to a linkedlist pointed to by list - when calling this function, pass the addr of list head

void listAdd(struct listElement **head, struct listElement *newElement) {
	struct listElement *iterator = (struct listElement*)head;

	newElement->next = iterator->next;
	newElement->prev = iterator;

	iterator->next = newElement;

	if(newElement->next != NULL) {
		newElement->next->prev = newElement;
	}
}

// listDelete
// deletes an element from a doubly linked list

void listRemove(struct listElement *b) {
	if(b->next != NULL)
		b->next->prev = b->prev;

	b->prev->next = b->next;

	b->next = NULL;
	b->prev = NULL;
}
