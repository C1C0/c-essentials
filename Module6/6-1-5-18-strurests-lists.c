/**
 * @file 6-1-5-18-strurests-lists.c
 * @author your name (you@domain.com)
 * @brief Scenario
Write a program that creates a FIFO queue and prints some values. For this lab,
use structures, pointers to structures and the malloc function.

Use the values from the array included in the code fragment. Create one element
of a queue for one element of an array (there are ten elements).

After you have created the list, print the first five values of the queue and
then the first seven values of the queue. Free up the memory.

After all the operations have been completed, print the message: Memory is
freed..

Your version of the program must print the same result as the expected output.

Expected output
First 5 values
2
4
5
6
7
First 7 values
2
4
5
6
7
8
9
Memory is freed
 * @version 0.1
 * @date 2021-11-29
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct element {
  int value;
  struct element *next;
};
int main(void) {
  int values[10] = {2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
  struct element *fifo =
      (struct element *)malloc(sizeof(struct element *) * (sizeof values / sizeof(int)));

  struct element *head = fifo;
	struct element *ptr;
	int i = 0;

	for(ptr = head; ptr; ptr = ptr->next){
		ptr->value = values[i];
		ptr->next = ptr + sizeof(struct element *);

		printf("%d\n", ptr->value);

		i++;

		if(i > sizeof values / sizeof(int)){
			break;
		}
	}

  return 0;
}