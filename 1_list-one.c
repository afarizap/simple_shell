 #include "0_shell.h"

/**
 * add_node - add new node at the end of the list.
 * @head: head node
 * @str: string to add
 * @mlloc: 1 if malloc, 0 if no malloc
 * Return: New node;
 */
token_s *addnode(token_s **head, char *str, int mlloc)
{
	token_s *nuevonodo;
	token_s *temporal;

	nuevonodo = malloc(sizeof(token_s));
	if (!nuevonodo)
		return (NULL);
	(*nuevonodo).str = str;
	(*nuevonodo).mlloc = mlloc;
	if (!*head)
	{
		(*nuevonodo).next = *head;
		*head = nuevonodo;
	}
	else
	{
		(*nuevonodo).next = NULL;
		temporal = *head;
		while ((*temporal).next)
			temporal = (*temporal).next;
		(*temporal).next = nuevonodo;
	}

	return (nuevonodo);
}
/**
 * free_list - free linked list memory
 * @head: head node
 */
void free_list(token_s **head)
{
	token_s *hold = NULL;

	while (head && *head)
	{
		if ((*head)->mlloc == 1)
			free((*head)->str);
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}

/**
 * print_token -  prints all the elements of a list_t list
 * @s: head of constant list_t being counted
 * Return: the number of nodes
 */
size_t print_token(token_s *s)
{
	int contador = 0;

	while (s)
	{
		if (!(*s).str)
		{
			write(STDOUT_FILENO, "nil", 4);
			write(STDOUT_FILENO, "\n", 2);
		}
		else
		{
			write(STDOUT_FILENO, s->str, _strlen(s->str));
			write(STDOUT_FILENO, "\n", 2);
		}
		s = (*s).next;
		contador++;
	}
	return (contador);
}
/**
 * delete_nodeint_at_index - Deletes a node.
 * @head: Linked list.
 * @index: Previous node to deleted one.
 * Return: 1 Success, -1 Failed.
 */
int delete_nodeint_at_index(token_s **head, unsigned int index)
{
	unsigned int id;
	token_s *current = *head, *del;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next, free(current);
		return (1);
	}
	else
		for (id = 0; current != NULL; id++)
		{
			if (id == index - 1)
			{
				del = current;
				del = del->next;
				current->next = del->next;
				if (del->mlloc == 1)
					free(del->str);
				free(del);
				return (1);
			}
			current = current->next;
		}
	return (-1);
}
