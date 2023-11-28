#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Author - Ibrahim Algadi
 * Return: NULL | a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *currentNode = *head, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = number;

	if (currentNode == NULL || currentNode->n >= number)
	{
		newNode->next = currentNode;
		*head = newNode;
		return (newNode);
	}

	while (currentNode && currentNode->next && currentNode->next->n < number)
		currentNode = currentNode->next;

	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}
