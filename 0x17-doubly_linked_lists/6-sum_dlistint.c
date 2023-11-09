#include "lists.h"
/**
* sum_dlistint - function that returns the sum of all the,
* data (n) of a linked list
* @head: pointer to head of linked list
*
* if the list is empty, return 0
*
* Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
