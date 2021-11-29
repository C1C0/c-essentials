/**
 * @file 6-1-5-17-structures-pointers-to-structures.c
 * @author your name (you@domain.com)
 * @brief Scenario
Check the program in the editor. Add code to print all the neighbors in ascending and descending order. Use only pointers and loops (don't use the houseX variables).

Your version of the program must print the same result as the expected output.

Expected output
Ascending order:
1
3
5
7
Descending order:
7
5
3
1
 * @version 0.1
 * @date 2021-11-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include <stdlib.h>

struct house
{
	int houseNumber;
	struct house *previous;
	struct house *next;
};

int main(void)
{
	struct house house1;
	struct house house2;
	struct house house3;
	struct house house4;

	house1.houseNumber = 1;
	house2.houseNumber = 3;
	house3.houseNumber = 5;
	house4.houseNumber = 7;

	house1.next = &house2;
	house2.next = &house3;
	house3.next = &house4;
	house4.next = NULL;

	house1.previous = NULL;
	house2.previous = &house1;
	house3.previous = &house2;
	house4.previous = &house3;

	struct house *firstHouse = &house1;
	struct house *lastHouse = &house4;
	struct house *current;
	
    printf("Ascending order:\n");
    for(current = firstHouse; current; current = current->next){
        printf("%d\n", current->houseNumber);
    }

    printf("Descending order:\n");
    for(current = lastHouse; current; current = current->previous){
        printf("%d\n", current->houseNumber);
    }
    
	return 0;
}