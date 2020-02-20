#include <stdio.h>
#include <stdlib.h>

typedef struct list_integer {
	int value;
	struct list_integer *next;
} list_integer;

list_integer *alloc_list_integer(int v) {
	list_integer *list = calloc(1, sizeof(list_integer));
	list->value = v;
	return list;
}

list_integer *removeKFromList(list_integer *l, int k) {
	if (l != NULL) {
		list_integer *current = l;

		while (current != NULL) {
			if ((current->next != NULL) && (current->next->value == k)) {
				free(current->next);
				current->next = current->next->next;
			} else {
				current = current->next;
			}
		}
		// In case first one equals k.
		if (l->value == k) {
			list_integer *temp = l->next;
			free(l);
			l = temp;
		}
	}

	return l;
}

int main()
{
	enum {False, True};
	list_integer *l = (list_integer*)calloc(1, sizeof(list_integer));
	list_integer *node = l;
	list_integer *previous = l;
	int null_list = True;

	while (scanf("%*[[,]%d", &node->value) == True) {
		null_list = False;
		list_integer *next_node = (list_integer*)calloc(1, sizeof(list_integer));
		node->next = next_node;
		previous = node;
		node = next_node;
	}

	if (null_list) {
		free(l);
		l = NULL;
	} else {
		free(node);
		node = NULL;
		previous->next = node;
	}
	getchar();

	int k = 0;
	scanf("%d", &k);
	l = removeKFromList(l, k);

	printf("[");
	while (l != NULL) {
		l->next == NULL ? printf("%d", l->value) : printf("%d, ", l->value);
		list_integer *temp = l->next;
		free(l);
		l = temp;
	}
	printf("]");
	return 0;
}