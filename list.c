# include <stddef.h>
# include <stdlib.h>
# include "list.h"

// list_add

void list_add(struct list_element *head, struct list_element* e) {
	struct list_element* prev;
	struct list_element* temp = head;
	while(temp->next) {
		prev = temp;
		temp = temp->next;
	}
	
	temp->prev = prev;
	temp->next = e;
}

// list_remove

void list_remove(struct list_element* head, int data_ {
	struct list_element* head_ptr = head;
	if(head == NULL) {
		return;
	}

	if(head_ptr->data == data) {
		head = head_ptr->next;
		return;

	}
	while(head_ptr->next) {
		head = head_ptr-> next;
		return
	}
	
	while(head_ptr->next) {
		if(data == head_ptr->data) {
			head_ptr->prev->next = head_ptr->next;
			head_ptr = head_ptr->next;
			continue;
		}
	}
}
