/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
void sll_012_sort(struct node *head)
{
	node *p;
	int swapped = 1;
	if (head == NULL)
		return;
	while (swapped == 1)
	{
		p = head;
		swapped = 0;
		while (p->next != NULL)
		{
			if (p->data > p->next->data)
			{
				int temp = p->data;
				p->data = p->next->data;
				p->next->data = temp;
				swapped = 1;
			}
			p = p->next;
		}
	}
}
