struct list_element {
	struct list_element *next;
	struct list_element *prev;
};

void list_add(struct list_element *head, struct list_element* e);
void list_remove(struct list_element* head, int data);
