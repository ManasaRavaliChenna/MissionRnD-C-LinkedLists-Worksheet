/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node 
{
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K)
{
	if (head == NULL)
		return head;
	int pos = 1;
	node *p=head, *q=head->next;
	if (p->next == NULL&&K == 1 || K == 1)
	{
		head = NULL;
		return head;
	}
	else if (K < 0||K==0)
		return NULL;
	else if (K>0)
	{
		struct node *ll1 = head;
		int c = 1;
		while (ll1 != NULL)
		{
			if ((c + 1) % K == 0)
			{
				if (ll1->next)
				{
					node* temp = ll1->next;
					ll1->next = temp->next;
					delete temp;
				}
				else
					break;
				c++;
			}
			ll1 = ll1->next;
			c++;
		}
		return head;
	}
}