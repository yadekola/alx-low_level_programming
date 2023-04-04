#include "lists.h"

/**
 * pop_listint - function with one argument
 * @head: pointer to head pointer of list
 *
 * Description: deletes the head node of linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int result = 0;
	listint_t *placeholder;

	if (*head == NULL)
		return (0);
	result = (*head)->n;
	placeholder = *head;
	*head = (*head)->next;
	free(placeholder);

	return (result);
}
