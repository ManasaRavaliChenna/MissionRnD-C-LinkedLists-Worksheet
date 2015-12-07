/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head)
{
	node *p;
	int swapped = 1;
	if (head == NULL)
		return NULL;
	while (swapped == 1)
	{
		p = head;
		swapped = 0;
		while (p->next != NULL)
		{
			if (p->num > p->next->num)
			{
				int temp = p->num;
				p->num = p->next->num;
				p->next->num = temp;
				swapped = 1;
			}
			p = p->next;
		}		
	}
	return head;
}