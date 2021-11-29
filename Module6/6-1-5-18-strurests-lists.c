#include <stdio.h>
#include <stdlib.h>

struct element
{
	int value;
	struct element *next;
};
int main(void)
{
	int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
	int i;
	struct element * current;
	struct element * last;
	struct element * head = (struct element *) malloc(sizeof(struct element));
	current = head;
	last = head;
	for (i=0 ; i < 10 ; i++)
	{
		if (current != head)
		{
			current = (struct element *) malloc(sizeof(struct element));
			last->next = current;
		}
		current->value = values[i];
		current->next = NULL;
		last = current;
		current = last->next;
	}

	current = head;
	puts("First 5 values");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	current = head;
	puts("First 7 values");
	for (i = 0; i < 7; i++)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	current = head;
	while (current)
	{
		last = current->next;
		free(current);
		current = last;
	}
	puts("Memory is freed");
	return 0;
}