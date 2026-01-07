#include<stdio.h>
#include<stdlib.h>

struct film {
	int n;
	struct film * next;
};

int main(void) {
	struct film * head = NULL;
	struct film * prev, * currect;
	int i = 3;
	int a;
	while (i --) {
		scanf("%d", &a);
		currect = (struct film *)malloc(sizeof(struct film));
		if (head == NULL) {
			head = currect;
		} else {
			prev->next = currect;
		}
		currect->next = NULL;
		currect->n = a;
		prev = currect;
	}

	currect = head;
	while (currect != NULL) {
		printf("%d", currect->n);
		currect = currect->next;
	}

	currect = head;
	while (currect != NULL) {
		free(currect);
		head = currect->next;
	}

	return 0;
}
