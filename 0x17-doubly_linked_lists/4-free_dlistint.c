#include "lists.h"

/*
 *
 *
 * /
 
 void free_dlistint(dlistint_t *head)

 {
 	dlistint_t *temp = head

	while(head != NULL)
	{
		temp = head;
		head = head -> next;
		free(temp);
	}
}
